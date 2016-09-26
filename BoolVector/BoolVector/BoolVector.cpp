// BoolVector.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include "bool_vector.h"
#include <iostream>
using namespace std;


int main() {
	
	//1 
	cout << "1.---------------"<<endl;
	
	BoolVector v1, v2;
	v1.printBites();
	v2.printBites();

	//2
	cout << "2.---------------" << endl;

	BoolVector v3(64);
	v3.printBites();

	//3
	cout << "3.---------------" << endl;
	BoolVector v4( {1,0,0,1,0,1,0,1,1,0,1} );
	v4.printBites();

	//4
	cout << "4.---------------" << endl;
	BoolVector v5 = v4;
	v5.printBites();

	//5
	cout << "5.---------------" << endl;

	BoolVector v6({0,0,0,0,0,1});
	
	if ( v6.notOperation() == true ){
		cout << "NOT operation executed success.\n";
		v6.printBites();
	}
	else{
		cout << "NOT operation didn't execute. \n";
	}

	//6 - 7
	cout << "6 - 7.---------------" << endl;

	BoolVector v7_1{ 1, 0, 1, 1, 0 },
			   v7_2{ 1, 1, 0, 1, 0 };

	BoolVector v7AND = v7_1.andOperation( v7_2 ),
			   v7OR  = v7_1.orOperation( v7_2 );
	
	cout << "AND: "; v7AND.printBites();
	cout << "OR: ";  v7OR.printBites();

	//8 - 9
	cout << "8 - 9.---------------" << endl;

	BoolVector v8( { 1, 0, 1, 0 } ),
			   v9 = v8,
			   v10( { 0, 1, 0, 1 } );

	cout << "v8 == v9 ??? - " << boolalpha << v8.equalTo(v9)<<endl;
	cout << "v9 == v8 ??? - " << boolalpha << v9.equalTo(v8) << endl;

	cout << "(static method) v8 == v10 ??? - " << boolalpha << BoolVector::equalTo(v8, v10) << endl;

	v10.notOperation();
	cout << "(static method) v8 == v10 after NOT operation??? - " << boolalpha << v8.equalTo(v10) << endl;

	//9 - 10
	cout << "9 - 10.---------------" << endl;

	BoolVector v11( {1,1,1,1,0,0,0,0,0} );
	cout << "Count of set bites: "<<v11.getCountOfSetBit()<<endl;
	cout << "Count of unset bites: " << v11.getCountOfUnsetBit() << endl;

	cout << "DESTRUCTORS:\n";
}
