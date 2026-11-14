#include "ComplexPrivate.h"
#include "Complex.h"
#include <iostream>
#include <sstream>

using namespace std;

ComplexPrivate& ComplexPrivate::operator++() {
	SetX(GetX() + 1);
	return *this;
}
ComplexPrivate ComplexPrivate::operator++(int) {
	ComplexPrivate temp(*this);
	SetX(GetX() + 1);
	return temp;
}

ComplexPrivate& ComplexPrivate::operator--() {
	SetX(GetX() - 1);
	return *this;
}
ComplexPrivate ComplexPrivate::operator--(int) {
	ComplexPrivate temp(*this);
	SetX(GetX() - 1);
	return temp;
}

ComplexPrivate& ComplexPrivate::operator=(const ComplexPrivate& other) {
	if (this != &other) {
		SetX(other.GetX());
		SetY(other.GetY());
	}
	return *this;
}

ComplexPrivate::operator string() const {
	stringstream ss;
	ss << GetX() << " + " << GetY() << "i";
	return ss.str();
}

ComplexPrivate operator+(const ComplexPrivate& a, const ComplexPrivate& b) {
	return ComplexPrivate(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}
ComplexPrivate operator*(const ComplexPrivate& a, const ComplexPrivate& b) {
	return ComplexPrivate(a.GetX() * b.GetX() - a.GetY() * b.GetY(),
		a.GetX() * b.GetY() + a.GetY() * b.GetX());
}
bool operator==(const ComplexPrivate& a, const ComplexPrivate& b) {
	return (a.GetX() == b.GetX()) && (a.GetY() == b.GetY());
}

ostream& operator<<(ostream& out, const ComplexPrivate& obj) {
	out << (const Complex&)obj;
	return out;
}

istream& operator>>(istream& in, ComplexPrivate& obj) {
	in >> (Complex&)obj;
	return in;
}