#include "Thermistor.h"

Thermistor::Thermistor() {}

float Thermistor::convertToF(float tempC) {
    return (float)(tempC * (9.0F / 5.0F) + 32.0F);
}

float Thermistor::getTempC() {
    float degreesC = 0;
    int rawValue = 0;

    for (unsigned char i = 1; i <= SAMPLE_COUNT; i++) {
        rawValue += rand() % 1024;
        //rawValue += 1024;
    }

    uint8_t i;
    for (i = 1; i < calibrationTable[i][0]; i++) {
        if (calibrationTable[i][0] > rawValue) {
            degreesC = calibrationTable[i - 1][1] + (rawValue - calibrationTable[i - 1][0]) *
                (float)(calibrationTable[i][1] - calibrationTable[i - 1][1]) /
                (float)(calibrationTable[i][0] - calibrationTable[i - 1][0]);
            break;
        }
    }

    // Overflow: Set to last value in the table
    if (i == TABLE_SIZE) { degreesC = calibrationTable[i - 1][1]; }

    return degreesC;
}