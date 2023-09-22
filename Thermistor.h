#ifndef THERMISTOR_H
#define THERMISTOR_H

#include <stdlib.h>
#include <stdint.h>
#include "CalibrationTable.h"

class Thermistor {
private:

public:
	Thermistor();

	float getTempC();
	float convertToF(float tempC);
};

#endif //THERMISTOR_H