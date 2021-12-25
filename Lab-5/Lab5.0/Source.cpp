#include <iostream>
#include "Kart.h"
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	vector < Kart* > karts;
	
	int num, pin, bal;
	string id;

	cout << "Пожулайста, введите свои данные от карты: ";
	cout << "Идентификатор: ";
	cin >> id;
	cout << "Номер: ";
	cin >> num;
	cout << "Пин-код: ";
	cin >> pin;
	cout << "Баланс: ";
	cin >> bal;
	cout << "\n\n";

	karts.push_back(new AllGames(id, num, pin, bal));
	karts.push_back(new AllGames(id, num, pin));
	karts.push_back(new AllGames(id, num));
	karts.push_back(new AllGames());
	karts.push_back(new WorldOfTanks(id, num, pin, bal));
	karts.push_back(new WorldOfTanks(pin, bal));
	karts.push_back(new WorldOfTanks(num, bal));
	karts.push_back(new WorldOfTanks());

	for (int i = 0; i < karts.size(); i++) {
		karts[i]->PrintAllInfo();
	}

	for (int i = 0; i < karts.size(); i++) {
		delete karts[i];
	}

	system("pause");
	return 0;
}