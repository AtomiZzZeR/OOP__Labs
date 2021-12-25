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

void Kart::AddBalance() {
	int addbalance;
	cout << "����� ����� �� ������ �������� �� �����? ����: ";
	cin >> addbalance;

	balance = balance + addbalance;

	cout << "\n������ ��� ������ ����������: " << balance << " ���." << "\n" << endl;
}

void Kart::MinusBalance() {
	int minusbalance;
	cout << "������� �� ������ �����? ����: ";
	cin >> minusbalance;

	if (balance <= 0) {
		cout << "������������ ������� ��� ��������!";
	}
	else {
		balance -= minusbalance;
	}

	cout << "\n������ ��� ������ ����������: " << balance << " ���." << "\n" << endl;
}
