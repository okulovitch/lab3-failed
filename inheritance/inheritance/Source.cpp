#include <iostream>
#include "Date.h"
#include "Check.h"
#include "Waybill.h"
#include "Receipt.h"
#include "Doc.h"
#include<string>
using namespace std;

int main() {
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
	Receipt r2(7, 22,"boris");
	r2.printOnScreen();
	Doc doc1;
	Doc doc2("Zed", "on Moon");



	return 0;
	

}