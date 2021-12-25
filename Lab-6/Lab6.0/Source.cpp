#include <iostream>
#include "Class.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	D2 obj2(2, 2, 2, 2);
	D3 obj3(3, 3, 3, 3);

	obj2.Print();
	cout << "\n\n";

	obj3.Print();

	cout << "\n\n";


	system("pause");
	return 0;
}