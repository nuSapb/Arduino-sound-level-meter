#define SoundSensorPin A1  //read analog voltage from the sound level meter
#define VREF  5.0  //voltage on REF

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    float voltageValue,dbValue;
    voltageValue = analogRead(SoundSensorPin) / 1024.0 * VREF;
    dbValue = voltageValue * 50.0;  //convert voltage to dB
    Serial.print(dbValue,1);
    Serial.println(" dBA");
    delay(50);
}
