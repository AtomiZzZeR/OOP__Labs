#include <iostream>
#include "Kart.h"

void Kart::VerificationNumber() {
	bool flag = true;

	while (flag) {
		cout << "������� ����� ����� �����: ";
		cin >> number;

		if (number == 12344321) {
			flag = false;
		}
		else {
			cout << "� ���� ������ �� ������� ����� � ����� �������, ����������, ��������� ���� ��� ���! \n\n";
		}
	}
}

void Kart::CheckPincode() {
	bool flag = true;

	while (flag) {
		cout << "������� ���-��� �� ����� �����: ";
		cin >> pincode;

		if (pincode == 1234) {
			flag = false;
		}
		else {
			cout << "�������� ���-��� �� �����, ��������� ��� ���! \n\n";
		}
	}
}

void Kart::PrintBalance() {
	cout << "��� ������ ����������: " << balance << " ���.\n" << endl;
}

void Kart::PrintAllInfo() {
	cout << "\n������ ����� �����:" << endl;
	cout << "����� �����: " << number << endl;
	cout << "���-���: " << pincode << endl;
	cout << "������: " << balance << endl;
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
	cout << "���������� ����������� �� ���������" << endl;
	balance = 100;
	number = 11111111;
	pincode = 1111;
}

Kart::~Kart() {
	cout << "�������� ����������" << endl;
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

