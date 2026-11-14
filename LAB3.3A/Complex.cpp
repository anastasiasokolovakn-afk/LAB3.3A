#include "Complex.h"
#include <iostream>
#include <sstream>

using namespace std;

double Complex::GetX() const {
	return x;
}
double Complex::GetY() const {
	return y;
}

void Complex::SetX(double value) {
	if (!isnan(value) && !isinf(value)) {
		x = value;
	}
	else {
		cout << "Помилка: Некоректне значення! Роботу завершено." << endl;
		exit(1);
	}
}
void Complex::SetY(double value) {
	if (!isnan(value) && !isinf(value)) {
		y = value;
	}
	else {
		cout << "Помилка: Некоректне значення! Роботу завершено." << endl;
		exit(1);
	}
}

Complex::Complex() {
	SetX(0.0);
	SetY(0.0);
}
Complex::Complex(double x, double y) {
	SetX(x);
	SetY(y);
}
Complex::Complex(const Complex& other) {
	x = other.x;
	y = other.y;
}

ostream& operator<<(ostream& out, const Complex& obj) {
	out << "(" << obj.x << ", " << obj.y << ")";
	return out;
}
istream& operator>>(istream& in, Complex& obj) {
	double tempX = 1.0, tempY = 1.0;

	cout << "  Дійсна частина (x): "; in >> obj.x;
	cout << "  Уявна частина (y): "; in >> obj.y;

	obj.SetX(tempX);
	obj.SetY(tempY);

	return in;
}
