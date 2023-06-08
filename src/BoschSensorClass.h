/*
  This file is part of the BMI270_BMM150 library.
  This version is modified by Cornelius Brütt und Julien Sommerkamp, Kiel, Germany
  Released to public domain
  version 1
  Original Release Date: June 2023

  Original notice:
  Copyright (c) 2019 Arduino SA. All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include <Arduino.h>
#include <Wire.h>
#include "utilities/BMI270-Sensor-API/bmi270.h"
#include "utilities/BMM150-Sensor-API/bmm150.h"

struct dev_info {
  TwoWire* _wire;
  uint8_t dev_addr;
};

class BoschSensorClass {
  public:
    BoschSensorClass(TwoWire& wire = Wire);
    ~BoschSensorClass() {}

    void setContinuousMode();
    void oneShotMode();

    int begin();
    void end();

    void debug(Stream&);
    #ifdef __MBED__
    void onInterrupt(mbed::Callback<void()>);
    void setInterruptPin(PinName irq_pin) {
      BMI270_INT1 = irq_pin;
    }
    void setInterruptPin(pin_size_t irq_pin) {
      BMI270_INT1 = digitalPinToPinName(irq_pin);
    }
    PinName BMI270_INT1 = NC;
    #endif
    // Accelerometer
    float accelOffset[3] = {0,0,0};       // zero point offset correction factor for calibration
    virtual int readAcceleration(float& x, float& y, float& z); // Results are in G (earth gravity).
    virtual int accelerationAvailable(); // Number of samples in the FIFO.
    virtual float getAccelODR(); // Sampling rate of the sensor. //CUSTOM RENAMED

    virtual float getAccelFS(); //CUSTOM MADE
    virtual int setAccelODR(int8_t setting); //CUSTOM MADE
    virtual int setAccelFS(int8_t setting); //CUSTOM MADE
    virtual void setAccelOffset(float offset[]); //CUSTOM MADE
    virtual float* getAccelOffset(); //CUSTOM MADE

    // Gyroscope
    float gyroOffset[3] = {0,0,0};      // zero point offset correction factor for calibration
    virtual int readGyroscope(float& x, float& y, float& z); // Results are in degrees/second.
    virtual int gyroscopeAvailable(); // Number of samples in the FIFO.
    virtual float getGyroODR(); // Sampling rate of the sensor. //CUSTOM RENAMED

    virtual float getGyroFS(); //CUSTOM MADE
    virtual int setGyroODR(int8_t setting); //CUSTOM MADE
    virtual int setGyroFS(int8_t setting); //CUSTOM MADE
    virtual void setGyroOffset(float offset[]); //CUSTOM MADE
    virtual float* getGyroOffset(); //CUSTOM MADE
    

    // Magnetometer
    float magnetOffset[3] = {0,0,0}; 
    virtual int readMagneticField(float& x, float& y, float& z); // Results are in uT (micro Tesla).
    virtual int magneticFieldAvailable(); // Number of samples in the FIFO.
    virtual float getMagnetODR(); // Sampling rate of the sensor.

    //virtual float getMagnetFS(); not possible at the moment
    virtual int setMagnetODR(int8_t setting); //CUSTOM MADE
    //virtual int settMagnetFS(int8_t setting); //CUSTOM MADE
    //virtual void settMagnetOffset(float offset[]); //CUSTOM MADE


    //float getTemperature();

  protected:
    // can be modified by subclassing for finer configuration
    virtual int8_t configure_sensor(struct bmm150_dev *dev);
    virtual int8_t configure_sensor(struct bmi2_dev *dev);

  private:
    static int8_t bmi2_i2c_read(uint8_t reg_addr, uint8_t *reg_data, uint32_t len, void *intf_ptr);
    static int8_t bmi2_i2c_write(uint8_t reg_addr, const uint8_t *reg_data, uint32_t len, void *intf_ptr);
    static void bmi2_delay_us(uint32_t period, void *intf_ptr);
    void interrupt_handler();
    void print_rslt(int8_t rslt);

  private:
    TwoWire* _wire;
    Stream* _debug = nullptr;
    #ifdef __MBED__
    mbed::Callback<void(void)> _cb;
    #endif
    bool _initialized = false;
    int _interrupts = 0;
    struct dev_info accel_gyro_dev_info;
    struct dev_info mag_dev_info;
    struct bmi2_dev bmi2;
    struct bmm150_dev bmm1;
    uint16_t _int_status;

    //float offsetAccel[3];
    //float offsetGyro[3]; 


  private:
    bool continuousMode;
};

extern BoschSensorClass IMU_BMI270_BMM150;
#undef IMU
#define IMU IMU_BMI270_BMM150