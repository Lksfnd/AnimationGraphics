#pragma once
#include <stdint.h>

class Vector {
public:
	Vector(uint16_t x = 0, uint16_t y = 0);

	uint16_t x;
	uint16_t y;

	Vector add(Vector otherVector);
	Vector invert();
	Vector multiply(uint16_t factor);

	void AddTo(Vector* otherVector);
};