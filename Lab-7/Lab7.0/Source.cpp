#include <iostream>
#include "Fraction.h"
#include <ctime>

using namespace std;

template <typename T1, typename T2>
T1 Min(T1 a, T2 b) {
	if (a < b) {
		return a;
	}
	return b;
}

template <typename T1, typename T2>
T1 Max(T1 a, T2 b) {
	if (a > b) {
		return a;
	}
	return b;
}

template <typename T1, typename T2>
T1 Sum(T1 a, T2 b) {
	return a + b;
}

template <typename T1, typename T2>
T1 Diff(T1 a, T2 b) {
	return a - b;
}

template <typename T1, typename T2>
T1 Mul(T1 a, T2 b) {
	return a * b;
}

template <typename T1, typename T2>
T1 Div(T1 a, T2 b) {
	return a / b;
}

void copy(int[], int[], int);

template <typename T1, typename T2>
T1 Copy(T1 arr1[], T2 arr2[], int sizeArr) {
	for (int i = 0; i < sizeArr; i++) {
		arr2[i] = arr1[i];
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	srand(time(NULL));

	Fraction firstFraction, secondFraction(2, 2, 2),
		thirdFraction(3, 3), fourthFraction(4);

	cout << firstFraction;
	cout << secondFraction;
	cout << thirdFraction;
	cout << fourthFraction;

	cout << Sum(firstFraction.GetNum1(), secondFraction.GetNum1()) << endl;
	cout << Diff(firstFraction.GetNum1(), secondFraction.GetNum1()) << endl;

	cout << "\n\n\n";

	const int sizeArr = 5;

	int arr1[sizeArr]{};
	int arr2[sizeArr]{};

	for (int i = 0; i < sizeArr; i++) {
		arr1[i] = rand() % 10;
	}

	for (int i = 0; i < sizeArr; i++) {
		cout << arr1[i] << "\t";
	}

	//cout << Copy(arr1[5], arr2[5], 5) << endl;


	system("pause");
	return 0;
}

void copy(int arr1[], int arr2[], int sizeArr) {
	for (int i = 0; i < sizeArr; i++) {
		arr2[i] = arr1[i];
	}
}
