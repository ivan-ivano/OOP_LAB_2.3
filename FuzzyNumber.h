#pragma once
#include <iostream>
#include <string>


class FuzzyNumber
{
private:
	int x, l, r;

public:
	FuzzyNumber();
	FuzzyNumber(int x, int l, int r);
	FuzzyNumber(const FuzzyNumber& v);

	void Set_x(int value);
	void Set_l(int value);
	void Set_r(int value);

	int Get_x() const;
	int Get_l() const;
	int Get_r() const;

	std::string ToString() const;

	FuzzyNumber& operator= (const FuzzyNumber& obj);
	FuzzyNumber operator+ (const FuzzyNumber& obj);
	FuzzyNumber operator* (const FuzzyNumber& obj);


	FuzzyNumber& operator++ ();
	FuzzyNumber& operator-- ();

	FuzzyNumber operator++ (int);
	FuzzyNumber operator-- (int);

	friend std::ostream& operator<< (std::ostream& out, const FuzzyNumber& obj);
	friend std::istream& operator>> (std::istream& in, FuzzyNumber& obj);

};

