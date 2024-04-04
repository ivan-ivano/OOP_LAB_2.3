#include "FuzzyNumber.h"
#include <iostream>
#include <string>
#include <sstream>

FuzzyNumber::FuzzyNumber()
{
	x = 0;
	l = 0;
	r = 0;
}

FuzzyNumber::FuzzyNumber(int x, int l, int r)
{
	this->x = x;
	this->l = l;
	this->r = r;
}

FuzzyNumber::FuzzyNumber(const FuzzyNumber& v)
{
	x = v.x;
	l = v.l;
	r = v.r;
}

void FuzzyNumber::Set_x(int value)
{
	x = value;
}

void FuzzyNumber::Set_l(int value)
{
	l = value;
}

void FuzzyNumber::Set_r(int value)
{
	r = value;
}

int FuzzyNumber::Get_x() const
{
	return x;
}

int FuzzyNumber::Get_l() const
{
	return l;
}

int FuzzyNumber::Get_r() const
{
	return r;
}

FuzzyNumber FuzzyNumber::operator+ (const FuzzyNumber& obj)
{
	FuzzyNumber t;
	t.x = x + obj.x;
	t.l = l + obj.l;
	t.r = r + obj.r;
	return t;
}

FuzzyNumber FuzzyNumber::operator* (const FuzzyNumber& obj)
{
	FuzzyNumber t;
	t.x = x * obj.x;
	t.l = l * obj.l;
	t.r = r * obj.r;
	return t;
}

FuzzyNumber& FuzzyNumber::operator= (const FuzzyNumber& obj)
{
	x = obj.x;
	l = obj.l;
	r = obj.r;

	return *this;
}

FuzzyNumber& FuzzyNumber::operator++ ()
{
	x++;
	l++;
	r++;
	return *this;
}

FuzzyNumber& FuzzyNumber::operator-- ()
{
	x--;
	l--;
	r--;
	return *this;
}

FuzzyNumber FuzzyNumber::operator++ (int)
{
	FuzzyNumber t(*this);
	++x;
	++l;
	++r;
	return t;
}

FuzzyNumber FuzzyNumber::operator-- (int)
{
	FuzzyNumber t(*this);
	--x;
	--l;
	--r;
	return t;
}

std::string FuzzyNumber::ToString() const
{
	std::stringstream sout;
	sout << "( " << x - l << " , " << x << " , " << x + r << " )";
	return sout.str();
}


std::ostream& operator<< (std::ostream& out, const FuzzyNumber& obj)
{
	out << obj.ToString() << std::endl;
	return out;
}

std::istream& operator>> (std::istream& in, FuzzyNumber& obj)
{	
	std::cout << " x = "; in >> obj.x;
	std::cout << " l = "; in >> obj.l;
	std::cout << " r = "; in >> obj.r;
	std::cout << std::endl;
		
	return in;
}