#pragma once
#include <iostream>

using namespace std;

class Complex
{
private:
	double x,y;
public:
	Complex();
	Complex(double x, double y);
	Complex(const Complex& other);

	double GetX() const;
	double GetY() const;

	void SetX(double value);
	void SetY(double value);

	friend ostream& operator<<(ostream& out, const Complex& obj);
	friend istream& operator>>(istream& in, Complex& obj);
};