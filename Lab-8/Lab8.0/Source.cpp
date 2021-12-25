#include <iostream>
#include "Kart.h"
#include <string>
#include <memory>

using namespace std;

class SomeClass {
public:
	int a;
	int b;
};


class SmartPointer {
public:
	SmartPointer* ptr;
	SomeClass* that;
	SomeClass* previos;

public:
	SmartPointer() : previos(NULL), that(new SomeClass) {};

	SmartPointer(const SmartPointer& _st) : that(new SomeClass(*(_st.that))), previos(NULL) {};

	~SmartPointer() { 
		cout << "¬ыполнилс€ деструктор смарт-поинтера" << endl;
		delete that; delete previos; 
	};

	SmartPointer& operator=(const SmartPointer& _st)
	{
		if (this != &_st)
		{
			delete that;
			that = new SomeClass(*(_st.that));
		}
		return *this;
	}

	void BeginTrans()
	{
		delete previos;
		previos = that;
		that = new SomeClass(*previos);
	};

	void Commit()
	{
		delete previos;
		previos = NULL;
	};

	void RollBack()
	{
		if (previos != NULL)
		{
			delete that;
			that = previos;
			previos = NULL;
		}
	}
		
	SomeClass* operator->() { return that; }
};

int main() {
	setlocale(LC_ALL, "Russian");

	Kart firstKart; /*secondKart(22222222, 2222, 200), thirdKart(33333333, 3333), fourthKart(44444444);*/

	SmartPointer s_ptr;

	s_ptr->a = 8;
	s_ptr->b = 10;
	s_ptr.BeginTrans();
	s_ptr->a = 5;
	s_ptr->b = 12;
	s_ptr.RollBack();
	s_ptr.BeginTrans();
	s_ptr->a = 5;
	s_ptr->b = 12;
	s_ptr.Commit();
	cout << "Hello, IT" << endl;

	unique_ptr<Kart> up1(new Kart(firstKart));

	/*cout << "smart-ptr:" << up1 << endl;*/

	unique_ptr<Kart> up2;

	up2 = move(up1);

	up2.swap(up1);

	//unique_ptr<Kart> up2(up1);

	/*cout << "smart-ptr:" << up2 << endl;*/

	shared_ptr<Kart> sp1(new Kart(firstKart));

	/*shared_ptr<Kart> sp2(sp1);*/

	/*cout << "smart-ptr:" << sp1 << endl;*/

	shared_ptr<Kart> sp2(new Kart(firstKart));

	/*cout << "smart-ptr:" << sp2 << endl;*/

	shared_ptr<Kart> sp3(new Kart(firstKart));

	/*cout << "smart-ptr:" << sp3 << endl;*/

	weak_ptr<Kart> wp1(sp1);

	weak_ptr<Kart> wp2(sp2);

	weak_ptr<Kart>::element_type w_var1 = *wp1.lock();

	weak_ptr<Kart>::element_type w_var2 = *wp2.lock();

	/*cout << "*wp1.lock() == " << w_var1 << endl;

	cout << "*wp2.lock() ==" << w_var2 << endl;*/
	
	system("pause");
	return 0;
}