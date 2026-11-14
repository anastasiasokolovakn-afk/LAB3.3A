#include "ComplexPublic.h"
#include "Complex.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

ComplexPublic& ComplexPublic::operator++() {
	SetX(GetX() + 1);
	return *this;
}
ComplexPublic ComplexPublic::operator++(int) {
	ComplexPublic temp(*this);
	SetX(GetX() + 1);
	return temp;
}

ComplexPublic& ComplexPublic::operator--() {
	SetX(GetX() - 1);
	return *this;
}
ComplexPublic ComplexPublic::operator--(int) {
	ComplexPublic temp(*this);
	SetX(GetX() - 1);
	return temp;
}

ComplexPublic& ComplexPublic::operator=(const ComplexPublic& other) {
	if (this != &other) {
		SetX(other.GetX());
		SetY(other.GetY());
	}
	return *this;
}

ComplexPublic::operator string() const {
	stringstream ss;
	ss << GetX() << " + " << GetY() << "i";
	return ss.str();
}

ComplexPublic operator+(const ComplexPublic& a, const ComplexPublic& b) {
	return ComplexPublic(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}
ComplexPublic operator*(const ComplexPublic& a, const ComplexPublic& b) {
	return ComplexPublic(a.GetX() * b.GetX() - a.GetY() * b.GetY(),
		a.GetX() * b.GetY() + a.GetY() * b.GetX());
}
bool operator==(const ComplexPublic& a, const ComplexPublic& b) {
	return (a.GetX() == b.GetX()) && (a.GetY() == b.GetY());
}