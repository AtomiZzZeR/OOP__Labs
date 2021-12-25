#include <fstream>
#include <stdio.h>
#include "Fraction.h"
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	cout << "Первое значение - числитель, второе - знаменатель" << "\n\n";
	Fraction a, b, c;
	a.Pin();
	b.Pin();

	cout << "\nВывод дроби a: " << a << endl;
	cout << "\nВывод дроби b: " << b << "\n" << endl;

	-a;

	cout << "\nВывод результата дроби после операций: " << a << endl;

	system("pause");
	return 0;
}