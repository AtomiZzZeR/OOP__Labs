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
	cout << "������ �������� - ���������, ������ - �����������" << "\n\n";
	Fraction a, b, c;
	a.Pin();
	b.Pin();

	cout << "\n����� ����� a: " << a << endl;
	cout << "\n����� ����� b: " << b << "\n" << endl;

	-a;

	cout << "\n����� ���������� ����� ����� ��������: " << a << endl;

	system("pause");
	return 0;
}