#include "complex.h"



Complex::Complex(double real, double imag) : real(real), imag(imag) {}

Complex::Complex(double real) : real(real), imag(0) {}

Complex::~Complex() {}



Complex Complex::operator+(const Complex &o) const
{
	return Complex(this->real + o.real, this->imag + o.imag);
}

Complex Complex::operator-(const Complex &o) const
{
	return Complex(this->real - o.real, this->imag - o.imag);
}

Complex Complex::operator*(const Complex &o) const
{
	double real = this->real * o.real - this->imag * o.imag;
	double imag = this->real * o.imag + this->imag * o.real;
	return Complex(real, imag);
}

Complex Complex::operator/(const Complex &o) const
{
	Complex result = *this * Complex(o.real, -o.imag);
	double abs = o.real * o.real + o.imag * o.imag;
	result.real /= abs;
	result.imag /= abs;
	return result;
}



Complex operator+(const double n, const Complex &o)
{
	return o + n;
}

Complex operator-(const double n, const Complex &o)
{
	return Complex(n) - o;
}

Complex operator*(const double n, const Complex &o)
{
	return o * n;
}

Complex operator/(const double n, const Complex &o)
{
	return Complex(n) / o;
}

ostream &operator<<(ostream &out, const Complex &o)
{
	if (o.real == 0 && o.imag == 0) 
	{
		out << 0;
	}
	else if (o.real == 0) 
	{
		out << o.imag << "i";
	}
	else if (o.imag == 0) 
	{
		out << o.real;
	}
	else if (o.imag > 0) 
	{
		if (o.imag == 1) 
		{
			out << o.real << "+i";
		}
		else 
		{
			out << o.real << "+" << o.imag << "i";
		}
	}
	else 
	{
		if (o.imag == -1) 
		{
			cout << o.real << "-i";
		}
		else 
		{
			out << o.real << o.imag << "i";
		}
	}

	return out;
}