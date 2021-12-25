#include "Fraction.h"
#include <iostream>
#include <time.h>

using namespace std;

#define INFINITY = 999;

ostream& operator << (ostream& out, const Fraction& a) {
	for (int i = 0; i < a.n; i++) {
		out << a.str[i] << " ";
	}
	return out;
}

Fraction& operator+= (Fraction& a, Fraction& b) {
	int q = 0, w = 0, infinity = 999;

	a.str[0] = b.str[1] * a.str[0] + b.str[0] * a.str[1];
	a.str[1] = b.str[1] * a.str[1];

	if (a.str[1] == 0) {
		a.str[0] = infinity;
		a.str[1] = 0;
	}
	else {
		int nod;
		if (a.str[0] < a.str[1])
			w = a.str[0];
		else w = a.str[1];
		if (w < 0) {
			w = w * -1;
		}
		for (int i = w; i > 0; i--) {
			if (a.str[0] % i == 0 && a.str[1] % i == 0) {
				nod = i;
				break;
			}
		}
		a.str[0] = a.str[0] / nod;
		a.str[1] = a.str[1] / nod;
		if (a.str[1] < 0 && a.str[0] > 0) {
			a.str[1] = a.str[1] * -1;
			a.str[0] = a.str[0] * -1;
		}
		else if (a.str[1] < 0 && a.str[0] < 0) {
			a.str[1] = a.str[1] * -1;
			a.str[0] = a.str[0] * -1;
		}
		return a;
	}
}

Fraction operator- (Fraction& a) {
	int n = 0, value = 0, infinity = 999;
	while (value == 0) {
		cout << "1) Отнять число"<< endl;
		cout << "2) Умножить на число"<< endl;
		cout << "3) Оставить дробь в покое"<< endl;
		cin >> n;
		switch (n) {
		case 1: {
			int t, w;
			cin >> t;
			t = a.str[1] * t;
			a.str[0] -= t;
			if (a.str[1] == 0) {
				a.str[0] = infinity;
				a.str[1] = 0;
			}
			else {
				int nod;
				if (a.str[0] < a.str[1])
					w = a.str[0];
				else w = a.str[1];
				if (w < 0) {
					w = w * -1;
				}
				for (int i = w; i > 0; i--) {
					if (a.str[0] % i == 0 && a.str[1] % i == 0) {
						nod = i;
						break;
					}
				}
				a.str[0] = a.str[0] / nod;
				a.str[1] = a.str[1] / nod;
				if (a.str[1] < 0 && a.str[0] > 0) {
					a.str[1] = a.str[1] * -1;
					a.str[0] = a.str[0] * -1;
				}
				else if (a.str[1] < 0 && a.str[0] < 0) {
					a.str[1] = a.str[1] * -1;
					a.str[0] = a.str[0] * -1;
				}
				value = 1;
				break;
			}
		}
		case 2: {
			int t, w;
			cin >> t;
			a.str[0] = t * a.str[0];
			if (a.str[1] == 0) {
				a.str[0] = infinity;
				a.str[1] = 0;
			}
			else {
				int nod;
				if (a.str[0] < a.str[1])
					w = a.str[0];
				else w = a.str[1];
				if (w < 0) {
					w = w * -1;
				}
				for (int i = w; i > 0; i--) {
					if (a.str[0] % i == 0 && a.str[1] % i == 0) {
						nod = i;
						break;
					}
				}
				a.str[0] = a.str[0] / nod;
				a.str[1] = a.str[1] / nod;
				if (a.str[1] < 0 && a.str[0] > 0) {
					a.str[1] = a.str[1] * -1;
					a.str[0] = a.str[0] * -1;
				}
				else if (a.str[1] < 0 && a.str[0] < 0) {
					a.str[1] = a.str[1] * -1;
					a.str[0] = a.str[0] * -1;
				}
				value = 1;
				break;
			}
		}
		case 3: {
			value = 1;
			break;
		}
		default: cout << "Нет такого варианта операции. Повторите ввод..." << endl;
			return a;
		}
	}
}

