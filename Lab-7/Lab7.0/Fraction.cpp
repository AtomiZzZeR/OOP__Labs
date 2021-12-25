#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction() {
	this->num1 = 1;
	this->num2 = 1;
	this->num3 = 1;
}

Fraction::Fraction(int num1, int num2, int num3) {
	this->num1 = num1;
	this->num2 = num2;
	this->num3 = num3;
}

Fraction::Fraction(int num1, int num2) : Fraction(num1, num2, 1) {
	this->num1 = num1;
	this->num2 = num2;
}

Fraction::Fraction(int num1) : Fraction(num1, 1, 1) {
	this->num1 = num1;
}

Fraction::~Fraction() {
	cout << "Вызвался деструктор" << endl;
}

void Fraction::PrintAllInfo() {
	cout << "Данные о значениях класса:" << endl;
	cout << "Число 1: " << num1 << endl;
	cout << "Число 2: " << num2 << endl;
	cout << "Число 3: " << num3 << endl;
}

int Fraction::GetNum1() {
	return num1;
}

void Fraction::SetNum1(int num1) {
	this->num1 = num1;
}

int Fraction::GetNum2() {
	return num2;
}

void Fraction::SetNum2(int num2) {
	this->num2 = num2;
}

int Fraction::GetNum3() {
	return num3;
}

void Fraction::SetNum3(int num3) {
	this->num3 = num3;
}

ostream& operator<< (ostream& out, const Fraction& temp) {
	out << "\nFraction (" << temp.num1 << ", " << temp.num2 << ", " << temp.num3 << ");\n";
	
	return out;
}

