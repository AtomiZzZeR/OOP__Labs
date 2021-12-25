#pragma once

#include <iostream>
#include <string>

using namespace std;

class Kart
{
protected:
	string name;
	int number;
	int pincode;
	int balance;

public:
	virtual void SetName (string id) = 0;
	virtual void SetNumber(int num) = 0;
	virtual void SetPincode(int pin) = 0;
	virtual void SetBalance(int bal) = 0;
	virtual void PrintAllInfo() = 0;
	virtual ~Kart() {};
};

class AllGames : public Kart 
{
public:
	AllGames(string id, int num, int pin, int bal) {
		name = id;
		number = num;
		pincode = pin;
		balance = bal;
	}
	AllGames(string id, int num, int pin) : AllGames(id, num, pin, 500) {};
	AllGames(string id, int num) : AllGames(id, num, 5555, 500) {};
	AllGames() : AllGames("Anonim", 100, 100, 100) {};
	~AllGames() override {
		cout << "Вызвался виртуальный деструктор" << endl;
	}

	void PrintAllInfo() override {
		cout << "Все данные карты: " << endl;
		cout << "Имя: " << name << endl;
		cout << "Номер: " << number << endl;
		cout << "Пин-код: " << pincode << endl;
		cout << "Балланс: " << balance << endl;
	}

	void SetName(string id) override {
		name = id;
	}
	void SetNumber(int num) override {
		number = num;
	}
	void SetPincode(int pin) override {
		pincode = pin;
	}
	void SetBalance(int bal) override {
		balance = bal;
	}
 };

class WorldOfTanks : public Kart
{
public:
	WorldOfTanks(string id, int num, int pin, int bal) {
		name = id;
		number = num;
		pincode = pin;
		balance = bal;
	}
	WorldOfTanks(int pin, int bal) : WorldOfTanks("WOT", 66666666, pin, bal) {};
	WorldOfTanks(string id, int num, int bal) : WorldOfTanks(id, num, 6666, bal) {};
	WorldOfTanks() : WorldOfTanks("Anonim", 100, 100, 100) {};
	~WorldOfTanks() {
		cout << "Вызвался виртуальный деструктор" << endl;
	}

	void PrintAllInfo() override {
		cout << "Все данные карты:" << endl;
		cout << "Имя: " << name << endl;
		cout << "Номер:" << number << endl;
		cout << "Пин-код: " << pincode << endl;
		cout << "Балланс: " << balance << endl;
	}

	void SetName(string id) override {
		name = id;
	}
	void SetNumber(int num) noexcept override {
		number = num;
	}
	void SetPincode(int pin) override {
		pincode = pin;
	}
	void SetBalance(int bal) override {
		balance = bal;
	}
};


