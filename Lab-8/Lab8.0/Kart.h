#pragma once
#include <iostream>
#include <string>

using namespace std;

class Kart
{
public:
	int number;
	int pincode;
	int balance;

public:
	void VerificationNumber();
	void CheckPincode();
	void PrintBalance();
	void PrintAllInfo();
	Kart();
	~Kart();
	Kart(int num, int pin, int bal);
	Kart(int num, int pin);
	Kart(int num);
	int GetNumber();
	void SetNumber(int valueNumber);
	int GetPincode();
	void SetPincode(int valuePincode);
	int GetBalance();
	void SetBalance(int valueBalance);
};

