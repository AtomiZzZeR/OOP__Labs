#pragma once
#include <iostream>
#include <time.h>

using namespace std;

class Fraction
{
private:
	const static int n = 2;
	int	str[n] = { 0,0 };

public:

	Fraction() {
		for (int i = 0; i < n; i++) {
			str[i] = rand() % 16 - 11;
		}
	}

	Fraction(int str[n]) {
		for (int i = 0; i < n; i++) {
			this->str[i] = str[i];
		}
	}

	void Pin() {
		for (int i = 0; i < n; i++) {
			cout << str[i] << " ";
		}
		cout << "\n\n";
	}

	friend ostream& operator << (ostream& out, const Fraction& a);
	friend Fraction operator- (Fraction& a);
	friend Fraction& operator+= (Fraction& a, Fraction& b);
};

