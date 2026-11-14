#pragma once
#include "Complex.h"
#include <string>

using namespace std;

class ComplexPublic : public Complex
{
public:
	ComplexPublic() : Complex() {}
	ComplexPublic(double x, double y) : Complex(x,y) {}
	ComplexPublic(const ComplexPublic& other) : Complex(other) {}

	friend ComplexPublic operator+(const ComplexPublic& a, const ComplexPublic& b);
	friend ComplexPublic operator*(const ComplexPublic& a, const ComplexPublic& b);
	friend bool operator==(const ComplexPublic& a, const ComplexPublic& b);

	ComplexPublic& operator=(const ComplexPublic& other);

	operator string() const;

	ComplexPublic& operator++();
	ComplexPublic operator++(int);

	ComplexPublic& operator--();
	ComplexPublic operator--(int);
};
