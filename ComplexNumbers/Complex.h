#pragma once
#include <iostream>
using namespace std;

class Complex
{
private:
	double real;
	double imag;

public:
	Complex(double real, double imag);
	Complex(double real);
	~Complex();

	Complex operator+(const Complex &) const;
	Complex operator-(const Complex &) const;
	Complex operator*(const Complex &) const;
	Complex operator/(const Complex &) const;

	friend Complex operator+(const double, const Complex &);
	friend Complex operator-(const double, const Complex &);
	friend Complex operator*(const double, const Complex &);
	friend Complex operator/(const double, const Complex &);
	friend ostream &operator<<(ostream &, const Complex &);
};