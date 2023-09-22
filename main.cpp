#include <iostream>
#include <windows.h>
#include "Thermistor.h"

Thermistor thermistor;

int main() {
    while (1) {
        float tempC = thermistor.getTempC();
        float tempF = tempC;
        //double tempF = thermistor.convertToF(tempC);

        std::cout << "TemperatureC: " << tempC << "     TemperatureF: " << tempF << std::endl;
        Sleep(2000);
    }
}