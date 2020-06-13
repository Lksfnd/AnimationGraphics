#include "Vector.h"

Vector::Vector(uint16_t x, uint16_t y)
{
	this->x = x;
	this->y = y;
}

Vector Vector::add(Vector otherVector) 
{
	this->x += otherVector.x;
	this->y += otherVector.y;
	return *this;
}

Vector Vector::invert() 
{
	return this->multiply(-1);
}

Vector Vector::multiply(uint16_t factor) 
{
	this->x *= factor;
	this->y *= factor;
	return *this;
}

void Vector::AddTo(Vector* otherVector)
{
	otherVector->add(*this);
}
