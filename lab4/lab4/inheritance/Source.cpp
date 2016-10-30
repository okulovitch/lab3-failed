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
	Самое простое приведение типов. Убирает так называемые cv спецификаторы 
	(cv qualifiers), то есть const и volatile. volatile встречается не очень часто,
	так что более известно как приведение типов, предназначенное для убирания const.
	Если приведение типов не удалось, выдается ошибка на этапе компиляции.
	При использовании остальных приведений типов cv спецификаторы останутся как были
	*/
	const Check* check1 = new Check;
	Check* check2 = const_cast <Check*>(check1);
	delete check1;

	// static_cast (при приведении базового типа к производному static_cast небезопастно)
	/*
	Если приведение не удалось, возникнет ошибка на этапе компиляции. 
	Однако, если это приведение между указателями на объекты классов вниз 
	по иерархии и оно не удалось, результат операции undefined. 
	То есть, возможно такое приведение: static_cast<PapearCheck*>(Check), 
	даже если Check не указывает на PapearCheck
	*/

	cout << "STATIC_CAST" << endl;
	Check* check3 = new Check;
	check3->printOnScreen();
	PapaerCheck* check4 = static_cast <PapaerCheck*>(check3);
	check4->printOnScreen();
	delete check3;
	

	//Алена C++ про привидение типов
	/*
	
	Приведение вниз по иерархии:

	class Base { public: virtual ~Base(void) { } };
	class Derived1 : public Base { };
	class Derived2 : public Base { };
	class Unrelated { };

	Base* pD1 = new Derived1;

	Вот такое приведение корректно: dynamic_cast<Derived1 *>(pD1);
	А вот такое возвратит NULL: dynamic_cast<Derived2 *>(pD1);
	*/

	// dynamic_cast

	/*Безопасное приведение по иерархии наследования, в том числе и для виртуального наследования.
dynamic_cast<derv_class *>(base_class_ptr_expr)
Используется RTTI (Runtime Type Information), чтобы привести один указатель
на объект класса к другому указателю на объект класса. Классы должны быть полиморфными,
то есть в базовом классе должна быть хотя бы одна виртуальная функция. Если эти условие не соблюдено,
ошибка возникнет на этапе компиляции. Если приведение невозможно, то об этом станет ясно только на этапе 
выполнения программы и будет возвращен NULL.*/
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