#pragma once

#include<vector>

class BoolVector {
public:
	//1
	BoolVector();
	
	BoolVector(int size);  //2
	BoolVector(const std::initializer_list<unsigned char>& bites); //3
	BoolVector(BoolVector& otherVector); //4
	

	bool notOperation(); //5
	BoolVector andOperation(BoolVector otherVector); //6
	
	BoolVector orOperation(BoolVector otherVector); //7

	bool equalTo(BoolVector otherVector); //8
	static bool equalTo(BoolVector vector1, BoolVector vector2); //9

	unsigned int getCountOfUnsetBit();// 9
	unsigned int getCountOfSetBit();// 10

	void printBites(); // 11
	~BoolVector();
private:
	std::vector <unsigned char> boolVector;


};