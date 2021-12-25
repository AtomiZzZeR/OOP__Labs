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

		cout << "Выберете действие для взаймодействия с картой:" << endl;
		cout << "1) Проверить баланс;" << endl;
		cout << "2) Добавить средства;" << endl;
		cout << "3) Снять средства;" << endl;
		cout << "4) Выход;" << endl;
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
			cout << "Заберите вашу карту..." << endl;

			flag = false;

			break;

		default:
			cout << "Действия с таким номером не имеется или же номер некорректный! Повторите ввод... \n\n";

			break;
		}
	}

	system("pause");
	return 0;
}