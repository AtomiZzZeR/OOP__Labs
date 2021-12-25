#include <iostream>
#include "Kart.h"

void Kart::VerificationNumber() {
	bool flag = true;

	while (flag) {
		cout << "Введите номер вашей карты: ";
		cin >> number;

		if (number == 12344321) {
			flag = false;
		}
		else {
			cout << "В базе данных не имеется карты с таким номером, пожалуйста, повторите ввод ещё раз! \n\n";
		}
	}
}

void Kart::CheckPincode() {
	bool flag = true;

	while (flag) {
		cout << "Введите пин-код от вашей карты: ";
		cin >> pincode;

		if (pincode == 1234) {
			flag = false;
		}
		else {
			cout << "Неверный пин-код от карты, повторите ещё раз! \n\n";
		}
	}
}

void Kart::PrintBalance() {
	cout << "Ваш баланс составляет: " << balance << " руб.\n" << endl;
}

void Kart::PrintAllInfo() {
	cout << "\nДанные вашей карты:" << endl;
	cout << "Номер карты: " << number << endl;
	cout << "Пин-код: " << pincode << endl;
	cout << "Баланс: " << balance << endl;
}

Kart::Kart(int num, int pin, int bal) {
	number = num;
	pincode = pin;
	balance = bal;
}

Kart::Kart(int num, int pin) : Kart(num, pin, 100) {
	number = num;
	pincode = pin;
}

Kart::Kart(int num) : Kart(num, 1111, 100) {
	number = num;
}

Kart::Kart() {
	cout << "Выполнился конструктор по умолчанию" << endl;
	balance = 100;
	number = 11111111;
	pincode = 1111;
}

Kart::~Kart() {
	cout << "Вызвался деструктор" << endl;
}

int Kart::GetNumber() {
	return number;
}

void Kart::SetNumber(int valueNumber) {
	number = valueNumber;
}

int Kart::GetPincode() {
	return pincode;
}

void Kart::SetPincode(int valuePincode) {
	pincode = valuePincode;
}

int Kart::GetBalance() {
	return balance;
}

void Kart::SetBalance(int valueBalance) {
	balance = valueBalance;
}

