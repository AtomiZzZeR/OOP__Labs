#pragma once
#include <iostream>
#include <string>

using namespace std;

class Kart
{
protected:
	int number;
	int pincode;
	int balance = 0;

public:
	/*Kart();
	~Kart();
	Kart(int num, int pin, int bal);*/

	void VerificationNumber();
	void CheckPincode();
	void PrintBalance();
	void AddBalance();
	void MinusBalance();

	/*int GetNumber() const {
		return number;
	}

	int GetPincode() const {
		return pincode;
	}

	int GetBalance() const
	{
		return balance;
	};*/
};

//class Visa : public Kart
//{
//private:
//	string namevisa;
//
//public:
//	Visa(string f_namevisa, int f_number, int f_pincode, int f_balance)
//		:Kart(f_number, f_pincode, f_balance), namevisa(f_namevisa)
//	{
//	}
//
//	string GetNameVisa() const {
//		return namevisa;
//	}
//
//	friend ostream& operator<<(ostream& out, const Visa& temp) {
//		out << "Visa (" << temp.GetNameVisa() << ", " << temp.GetNumber() << ", " << temp.GetPincode() << ", " << temp.GetBalance() << ")\n";
//		return out;
//	}
//};
//
//class MasterCard : public Kart
//{
//private:
//	string namemastercard;
//
//public:
//	MasterCard(string f_namemastercard, int f_number, int f_pincode, int f_balance)
//		:Kart(f_number, f_pincode, f_balance), namemastercard(f_namemastercard)
//	{
//	}
//
//	string GetNameMasterCard() const {
//		return namemastercard;
//	}
//
//	friend ostream& operator<<(ostream& out, const MasterCard& temp) {
//		out << "MasterCard (" << temp.GetNameMasterCard() << ", " << temp.GetNumber() << ", " << temp.GetPincode() << ", " << temp.GetBalance() << ")\n";
//		return out;
//	}
//};
//
//
