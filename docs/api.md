# ArduinoBMI270_BMM150_Modded library

## Methods

### `begin()`

Initialize the IMU.

#### Syntax 

```Arduino
IMU.begin();
```

#### Parameters

None.

#### Returns

1 on success, 0 on failure.

#### Example

```Arduino
if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU!");
    while (1);
}
```

#### See also

* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldSampleRate()](#magneticfieldsamplerate)
* [magneticFieldAvailable()](#magneticfieldavailable)

### `readAcceleration()`

Query the IMU's accelerometer and return the acceleration in g's. 

#### Syntax 

```Arduino
IMU.readAcceleration(x,y,z);
```

#### Parameters

* _x_: float variable where the acceleration value in the IMU's x-axis will be stored.
* _y_: float variable where the acceleration value in the IMU's y-axis will be stored.
* _z_: float variable where the acceleration value in the IMU's z-axis will be stored.

#### Returns

1 on success, 0 on failure.

#### Example

```Arduino
float x, y, z;

if (IMU.accelerationAvailable()) {
    IMU.readAcceleration(x, y, z);

    Serial.print(x);
    Serial.print('\t');
    Serial.print(y);
    Serial.print('\t');
    Serial.println(z);
}
```

#### See also

* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldSampleRate()](#magneticfieldsamplerate)
* [magneticFieldAvailable()](#magneticfieldavailable)
### `readGyroscope()`

Query the IMU's gyroscope and return the angular speed in dps (degrees per second).

#### Syntax 

```Arduino
IMU.readGyroscope(x,y,z)
```

#### Parameters

* _x_: float variable where the gyroscope value in the IMU's x-axis will be stored.
* _y_: float variable where the gyroscope value in the IMU's y-axis will be stored.
* _z_: float variable where the gyroscope value in the IMU's z-axis will be stored.

#### Returns

1 on success, 0 on failure.

#### Example

```Arduino
float x, y, z;

if (IMU.gyroscopeAvailable()) {
    IMU.readGyroscope(x, y, z);

    Serial.print(x);
    Serial.print('\t');
    Serial.print(y);
    Serial.print('\t');
    Serial.println(z);
}
```

#### See also
* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldSampleRate()](#magneticfieldsamplerate)
* [magneticFieldAvailable()](#magneticfieldavailable)

### `accelerationAvailable()`

Query if new acceleration data from the IMU is available.

#### Syntax 

```Arduino
IMU.accelerationAvailable()
```

#### Parameters

None.

#### Returns

0 if no new acceleration data is available, 1 if new acceleration data is available.

#### Example

```Arduino
float x, y, z;

if (IMU.accelerationAvailable()) {
    IMU.readAcceleration(x, y, z);

    Serial.print(x);
    Serial.print('\t');
    Serial.print(y);
    Serial.print('\t');
    Serial.println(z);
}
```

#### See also

* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldSampleRate()](#magneticfieldsamplerate)
* [magneticFieldAvailable()](#magneticfieldavailable)

### `gyroscopeAvailable()`

Query if new gyroscope data from the IMU is available.

#### Syntax 

```Arduino
IMU.gyroscopeAvailable()
```

#### Parameters

None.

#### Returns

0 if no new gyroscope data is available, 1 if new gyroscope data is available.

#### Example

```Arduino
float x, y, z;

if (IMU.gyroscopeAvailable()) {
    IMU.readGyroscope(x, y, z);

    Serial.print(x);
    Serial.print('\t');
    Serial.print(y);
    Serial.print('\t');
    Serial.println(z);
}
```

#### See also

* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldSampleRate()](#magneticfieldsamplerate)
* [magneticFieldAvailable()](#magneticfieldavailable)

### `getAccelODR()`

Return the IMU's accelerometer sample rate.

#### Syntax 

```Arduino
IMU.getAccelODR()
```

#### Parameters

None.

#### Returns

The IMU's accelerometer sample rate in Hz.

#### Example

```Arduino
Serial.print("Accelerometer sample rate = ");
Serial.print(IMU.getAccelODR());
Serial.println(" Hz");
Serial.println();
Serial.println("Acceleration in g's");
Serial.println("X\tY\tZ");
```

#### See also
* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldSampleRate()](#magneticfieldsamplerate)
* [magneticFieldAvailable()](#magneticfieldavailable)

### `getGyroODR()`

Return the IMU's gyroscope sample rate.

#### Syntax 

```Arduino
IMU.getGyroODR()
```

#### Parameters

None.

#### Returns

The IMU's gyroscope sample rate in Hz.

#### Example

```Arduino
Serial.print("Gyroscope sample rate = ");
Serial.print(IMU.getGyroODR());
Serial.println(" Hz");
Serial.println();
Serial.println("Angular speed in degrees/second");
Serial.println("X\tY\tZ");
```

#### See also

* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldSampleRate()](#magneticfieldsamplerate)
* [magneticFieldAvailable()](#magneticfieldavailable)

### `setAccelODR()`

Sets the output data rate of the acceleration sensor.

#### Syntax 

```Arduino
IMU.setAccelODR(odr)
```

#### Parameters

- *odr* int that corresponds with the desired output rate. Possible settings are:

| **ODR** | **setting** | 
|---------|-------------|
|0 | 12.5Hz
|1| 25Hz
|2 | 50Hz
|3 | 100Hz

every other setting results in ODR = 100Hz


#### Returns

1 on success, 0 on failure.

#### Example

```Arduino
if (IMU.setAccelODR(2)) {
    Serial.println("ODR set successfully to 50Hz");
}
```

#### See also
* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldSampleRate()](#magneticfieldsamplerate)
* [magneticFieldAvailable()](#magneticfieldavailable)

### `setGyroODR()`

Sets the output data rate of the gyroscope sensor.

#### Syntax 

```Arduino
IMU.setGyroODR(odr)
```

#### Parameters

- *odr* int that corresponds with the desired output rate. Possible settings are:

| **ODR** | **setting** | 
|---------|-------------|
|0| 25Hz
|1 | 50Hz
|2 | 100Hz

every other setting results in ODR = 100Hz


#### Returns

1 on success, 0 on failure.

#### Example

```Arduino
if (IMU.setGyroODR(1)) {
    Serial.println("ODR set successfully to 50Hz");
}
```

#### See also
* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldSampleRate()](#magneticfieldsamplerate)
* [magneticFieldAvailable()](#magneticfieldavailable)

### `getAccelFS()`

Gets the Full Scale setting of the acceleration sensor

#### Syntax 

```Arduino
IMU.getAccelFS()
```

#### Parameters

*None*

#### Returns

float value of the fule scale range setting.

#### Example

```Arduino
Serial.print("Acceleration range = +-");
Serial.print(IMU.getAccelFS());
Serial.println("G");
```

#### See also
* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldSampleRate()](#magneticfieldsamplerate)
* [magneticFieldAvailable()](#magneticfieldavailable)

### `getGyroFS()`

Gets the Full Scale setting of the gyroscope sensor

#### Syntax 

```Arduino
IMU.getGyroFS()
```

#### Parameters

*None*

#### Returns

float value of the fule scale range setting.

#### Example

```Arduino
Serial.print("Gyroscope range = +-");
Serial.print(IMU.getGyroFS());
Serial.println("dps");
```

#### See also
* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldSampleRate()](#magneticfieldsamplerate)
* [magneticFieldAvailable()](#magneticfieldavailable)

### `setAccelFS()`

Sets the full data scale of the acceleration sensor.

#### Syntax 

```Arduino
IMU.setAccelFS(fs)
```

#### Parameters

- *fs* int that corresponds with the full scale setting. Possible settings are:

| **FS** | **setting** | 
|---------|-------------|
|0 | 2G
|1| 4G
|2 | 8G|
|3 | 16G

every other setting results in FS = 16G


#### Returns

1 on success, 0 on failure.

#### Example

```Arduino
if (IMU.setAccelFS(2)) {
    Serial.println("FS set successfully to -8G -> +8G");
}
```

#### See also
* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldSampleRate()](#magneticfieldsamplerate)
* [magneticFieldAvailable()](#magneticfieldavailable)
### `setGyroFS()`

Sets the full data scale of the gyroscope sensor.

#### Syntax 

```Arduino
IMU.setGyroFS(fs)
```

#### Parameters

- *fs* int that corresponds with the desired full scale setting. Possible settings are:

| **ODR** | **setting** | 
|---------|-------------|
|0 |125dps
|1 |250dps
|2|500dps
|3|1000dps
|4|2000dps

every other setting results in FS = 125dps


#### Returns

1 on success, 0 on failure.

#### Example

```Arduino
if (IMU.setAccelFS(0)) {
    Serial.println("FS set successfully to +-125dps");
}
```

#### See also
* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldSampleRate()](#magneticfieldsamplerate)
* [magneticFieldAvailable()](#magneticfieldavailable)

### `setAccelOffset()`

Sets the offset parameters of the acceleration sensor.

#### Syntax 

```Arduino
IMU.setAccelOffset( {x,y,z} )
```

#### Parameters

float[3] array with the x,y,z values of the offset

#### Returns

1 on success, 0 on failure.

#### Example

```Arduino
if (IMU.setAccelOffset(3,5,6)) {
    Serial.println("Offset set");
}
```

#### See also
* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldSampleRate()](#magneticfieldsamplerate)
* [magneticFieldAvailable()](#magneticfieldavailable)

### `setGyroOffset()`

Sets the offset parameters of the gyroscope sensor.

#### Syntax 

```Arduino
IMU.setGyroOffset( {x,y,z} )
```

#### Parameters

float[3] array with the x,y,z values of the offset

#### Returns

1 on success, 0 on failure.

#### Example

```Arduino
if (IMU.setGyroOffset(3,5,6)) {
    Serial.println("Offset set");
}
```

#### See also
* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldSampleRate()](#magneticfieldsamplerate)
* [magneticFieldAvailable()](#magneticfieldavailable)
### `readMagneticField()`

Query the IMU's magnetometer and return the magnetic field in uT (micro Tesla).

#### Syntax 

```
IMU.readMagneticField(x,y,z)
```

#### Parameters

* _x_: float variable where the magnetometer value in the IMU's x-axis will be stored.
* _y_: float variable where the magnetometer value in the IMU's y-axis will be stored.
* _z_: float variable where the magnetometer value in the IMU's z-axis will be stored.

#### Returns

1 on success, 0 on failure.

#### Example

```
float x, y, z;

if (IMU.magneticFieldAvailable()) {
    IMU.readMagneticField(x, y, z);

    Serial.print(x);
    Serial.print('\t');
    Serial.print(y);
    Serial.print('\t');
    Serial.println(z);
}
```

#### See also

* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [magneticFieldSampleRate()](#magneticfieldsamplerate)
* [magneticFieldAvailable()](#magneticfieldavailable)

### `magneticFieldSampleRate()`

Return the IMU's magnetometer sample rate.

#### Syntax 

```
IMU.magneticFieldSampleRate()
```

#### Parameters

None.

#### Returns

The IMU's magnetometer sample rate in Hz.

#### Example

```
Serial.print("Magnetic Field sample rate = ");
Serial.print(IMU.magneticFieldSampleRate());
Serial.println(" Hz");
Serial.println();
Serial.println("Magnetic Field in uT");
Serial.println("X\tY\tZ");
```

#### See also

* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldAvailable()](#magneticfieldavailable)

### `magneticFieldAvailable()`

Query if new magnetic field data from the IMU is available.

#### Syntax 

```
IMU.magneticFieldAvailable()
```

#### Parameters

None.

#### Returns

0 if no new magnetic field data is available, 1 if new magnetic field data is available.

#### Example

```
float x, y, z;

if (IMU.magneticFieldAvailable()) {
    IMU.readMagneticField(x, y, z);

    Serial.print(x);
    Serial.print('\t');
    Serial.print(y);
    Serial.print('\t');
    Serial.println(z);
}
```

#### See also

* [begin()](#begin)
* [readAcceleration()](#readacceleration)
* [readGyroscope()](#readgyroscope)
* [accelerationAvailable()](#accelerationavailable)
* [gyroscopeAvailable()](#gyroscopeavailable)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [setAccelODR()](#setAccelODR)
* [setGyroODR()](#setGyroODR)
* [getAccelFS()](#getAccelFS)
* [getGyroFS()](#getGyroFS)
* [setAccelFS()](#setAccelFS)
* [setGyroFS()](#setGyroFS)
* [setAccelOffset()](#setAccelOffset)
* [setGyroOffset()](#setGyroOffset)
* [getAccelODR()](#getAccelODR)
* [getGyroODR()](#getGyroODR)
* [readMagneticField()](#readmagneticfield)
* [magneticFieldAvailable()](#magneticfieldavailable)

