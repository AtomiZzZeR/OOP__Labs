#include <iostream>
#include "Kart.h"
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int w;
	bool flag = true;

	Kart firstKart;

	while (flag) {

		cout << "�������� �������� ��� �������������� � ������:" << endl;
		cout << "1) ��������� ������;" << endl;
		cout << "2) �������� ��������;" << endl;
		cout << "3) ����� ��������;" << endl;
		cout << "4) �����;" << endl;
		cout << "\n";
		cin >> w;
		cout << "\n";

		switch (w) {
		case 1:
			firstKart.VerificationNumber();

			firstKart.CheckPincode();

			firstKart.PrintBalance();

			break;

		case 2:
			firstKart.AddBalance();

			break;

		case 3:
			firstKart.MinusBalance();

			break;

		case 4:
			cout << "�������� ���� �����..." << endl;

			flag = false;

			break;

		default:
			cout << "�������� � ����� ������� �� ������� ��� �� ����� ������������! ��������� ����... \n\n";

			break;
		}
	}

	system("pause");
	return 0;
}