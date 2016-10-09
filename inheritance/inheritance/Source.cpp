#include <iostream>
#include "Date.h"
#include "Check.h"
#include "Waybill.h"
#include "Receipt.h"
#include "Doc.h"
#include<string>
#include<fstream>
#include<iostream>

using namespace std;

int main() {

	Doc doc2(Date{ 12,20,2016 }, "Boris","qwrytgg");
	doc2.printOnScreen();




	Date d1;
	Date d2(1, 3, 2007);
	Date d3(d2);
	cout << d3.getDay() << endl;
	cout << d1.getMonth() << endl;
	Date d4(1, 7, 2016);
	d4.printOnScreen();


	Check c1;
	Date dateOfPurchache(-22, 9, 2016);


	Waybill w1;
	Waybill w2(15, 11, "windows");
	w2.printOnScreen();

	Receipt r1;
	Receipt r2(7, 22, "boris");
	r2.printOnScreen();
	Doc doc1;

	Doc* documents[] = {
		new Doc(Date{12,8,2015},"Chester","default document"),
		new Receipt(12,25,"Gary"),
		new Waybill(25,11,"glass"),
		new Check(25,1455)
	};
	cout << "++++++++++++++++++++++++\n";
	documents[0]->printOnScreen();
	documents[1]->printOnScreen();
	documents[2]->printOnScreen();
	documents[3]->printOnScreen();
	cout << "++++++++++++++++++++++++\n";
	documents[3]->setDate(Date{ 11,2,2016 });
	cout << documents[3]->getDate().getDay() << endl;
	
	char buff[50]; 
	ifstream fin("Doc.txt"); 
	Doc document;
	if (!fin.is_open()) 
		cout << "file not  found!\n"; 
	else
	{
		fin >> buff; 
		document.setName(buff);
		document.getName();

		cout << buff << endl; 
	}
	system("pause");
	
	return 0;
	

}