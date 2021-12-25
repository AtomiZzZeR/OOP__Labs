#pragma once

#include <iostream>

using namespace std;

class Fraction
{
private:
	int num1;
	int num2;
	int num3;

public:
	Fraction();
	Fraction(int, int, int);
	Fraction(int, int);
	Fraction(int);
	~Fraction();
	
	void PrintAllInfo();

	int GetNum1();
	void SetNum1(int);

	int GetNum2();
	void SetNum2(int);

	int GetNum3();
	void SetNum3(int);

	friend ostream& operator<< (ostream& out, const Fraction& fraction);
};

