#pragma once

#include <iostream>

using namespace std;

// B1 ---------------------------------------------------------------------------------------- B1

class B1
{
protected:
	int b1;

public:
	B1();
	B1(int);
	~B1();

	int GetB1() {
		return this->b1;
	}
	void SetB1(int) {
		this->b1 = b1;
	}

	void Print();
};

// B2 ---------------------------------------------------------------------------------------- B2

class B2 
{
protected:
	int b2;

public:
	B2();
	B2(int);
	~B2();
	
	int GetB2() {
		return this->b2;
	}
	void SetB2(int) {
		this->b2 = b2;
	}

	void Print();
};

// D1 --------------------------------------------------------------------------------------- D1

class D1 : private B1, public B2
{
protected:
	int d1;

public:
	D1();
	D1(int, int, int);
	~D1();

	int GetD1() {
		return this->d1;
	}
	void SetD1(int) {
		this->d1 = d1;
	}

	void Print();
};

// D2 -------------------------------------------------------------------------------------- D2

class D2 : public D1
{
protected:
	int d2;

public:
	D2();
	D2(int, int, int, int);
	~D2();

	int GetD2() {
		return this->d2;
	}
	void SetD2(int) {
		this->d2 = d2;
	}

	void Print();
};

// D3 -------------------------------------------------------------------------------------- D3

class D3 : private D1
{
protected:
	int d3;

public:
	D3();
	D3(int, int, int, int);
	~D3();

	int GetD3() {
		return this->d3;
	}
	void SetD3(int) {
		this->d3 = d3;
	}

	void Print();
};



