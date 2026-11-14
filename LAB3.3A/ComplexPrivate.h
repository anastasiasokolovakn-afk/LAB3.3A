#pragma once
#include "Complex.h"
#include <iostream>
#include <string>

class ComplexPrivate : private Complex
{
public: 
	ComplexPrivate() : Complex() {}
	ComplexPrivate(double x, double y) : Complex(x, y) {}
	ComplexPrivate(const ComplexPrivate& other) : Complex(other) {}

	friend ComplexPrivate operator+(const ComplexPrivate& a, const ComplexPrivate& b);
	friend ComplexPrivate operator*(const ComplexPrivate& a, const ComplexPrivate& b);
	friend bool operator==(const ComplexPrivate& a, const ComplexPrivate& b);

	ComplexPrivate& operator=(const ComplexPrivate& other);

	operator string() const;

	ComplexPrivate& operator++();
	ComplexPrivate operator++(int);

	ComplexPrivate& operator--();
	ComplexPrivate operator--(int);

	friend ostream& operator<<(ostream& out, const ComplexPrivate& obj);
	friend istream& operator>>(istream& in, ComplexPrivate& obj);
};