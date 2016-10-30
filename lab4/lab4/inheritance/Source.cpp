#include <iostream>
#include "Date.h"
#include "Check.h"
#include "Waybill.h"
#include "Receipt.h"
#include "Doc.h"
#include"Inspector.h"
#include"Curator.h"
#include"PrintClass.h"
#include"PapaerCheck.h"
#include<string>
#include<fstream>


using namespace std;

int main() {
	{	
	Waybill w21;//counter and
	Check ch1;
	Receipt r25;
	w21.printOnScreen();
	ch1.printOnScreen();
	r25.printOnScreen();

	Date d1(12, 11, 2020);
	Inspector ins1;
	ins1.iKnowAllAboutYou(d1);
	iCanModify(d1);
	d1.printOnScreen();

	cout << "---------------" << endl;
	cout << "Before calling destructors count of docs = " << Doc::getCounter()<<endl;
}
	cout << "---------------" << endl;
	cout << "After calling destructors count of docs = " << Doc::getCounter()<<endl;

	const int size = 4;
	Doc* arrayOfDocs[size] = {
		new Check,
		new Check( 10, 100, "Check for education" ),
	//	new Receipt, protected
		new Waybill,
		new Waybill(10, 100, "My Waybill ")
		//new Doc abstraktniy vizov tolko cherez proizvodnie

	};
	
	for (int i = 0; i < size; i++)
		PrintClass::printInfoAboutDocument( arrayOfDocs[i] );

	for (int i = 0; i < size; i++)
		delete arrayOfDocs[i];

	/* const_cast
	����� ������� ���������� �����. ������� ��� ���������� cv ������������� 
	(cv qualifiers), �� ���� const � volatile. volatile ����������� �� ����� �����,
	��� ��� ����� �������� ��� ���������� �����, ��������������� ��� �������� const.
	���� ���������� ����� �� �������, �������� ������ �� ����� ����������.
	��� ������������� ��������� ���������� ����� cv ������������� ��������� ��� ����
	*/
	const Check* check1 = new Check;
	Check* check2 = const_cast <Check*>(check1);
	delete check1;

	// static_cast (��� ���������� �������� ���� � ������������ static_cast ������������)
	/*
	���� ���������� �� �������, ��������� ������ �� ����� ����������. 
	������, ���� ��� ���������� ����� ����������� �� ������� ������� ���� 
	�� �������� � ��� �� �������, ��������� �������� undefined. 
	�� ����, �������� ����� ����������: static_cast<PapearCheck*>(Check), 
	���� ���� Check �� ��������� �� PapearCheck
	*/

	cout << "STATIC_CAST" << endl;
	Check* check3 = new Check;
	check3->printOnScreen();
	PapaerCheck* check4 = static_cast <PapaerCheck*>(check3);
	check4->printOnScreen();
	delete check3;
	

	//����� C++ ��� ���������� �����
	/*
	
	���������� ���� �� ��������:

	class Base { public: virtual ~Base(void) { } };
	class Derived1 : public Base { };
	class Derived2 : public Base { };
	class Unrelated { };

	Base* pD1 = new Derived1;

	��� ����� ���������� ���������: dynamic_cast<Derived1 *>(pD1);
	� ��� ����� ��������� NULL: dynamic_cast<Derived2 *>(pD1);
	*/

	// dynamic_cast

	/*���������� ���������� �� �������� ������������, � ��� ����� � ��� ������������ ������������.
dynamic_cast<derv_class *>(base_class_ptr_expr)
������������ RTTI (Runtime Type Information), ����� �������� ���� ���������
�� ������ ������ � ������� ��������� �� ������ ������. ������ ������ ���� ������������,
�� ���� � ������� ������ ������ ���� ���� �� ���� ����������� �������. ���� ��� ������� �� ���������,
������ ��������� �� ����� ����������. ���� ���������� ����������, �� �� ���� ������ ���� ������ �� ����� 
���������� ��������� � ����� ��������� NULL.*/
	cout << "DYNAMIC_CAST" << endl;
	Check* check5 = new PapaerCheck; // fixed
	check5->printOnScreen();
	PapaerCheck* check6 = dynamic_cast <PapaerCheck*>(check5);
	check6->printOnScreen();
	delete check5;
	
	Receipt::GetCost g1;
	g1.setCost();
	g1.print();
	Receipt urf;
	urf.getWaterCost();
	urf.setElectrisityCost(8);
	urf.printOnScreen();
	

	return 0;
}