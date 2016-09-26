#include "stdafx.h"
#include "bool_vector.h"


#include  <iostream>
#include <algorithm>


BoolVector::BoolVector() {
	std::cout << "default constructor activated" << std::endl;
}

BoolVector::BoolVector(int size) {
	std::cout << "first constructor with parametr activated" << std::endl;
	boolVector.reserve(size);
	boolVector.resize(size);
}

BoolVector::BoolVector(BoolVector& otherVector) {
	std::cout << "copy constructor activated" << std::endl;
	boolVector = otherVector.boolVector;
}

BoolVector::BoolVector(const std::initializer_list<unsigned char>& bites){
	std::cout << " second constructor with parametr activated" << std::endl;
	boolVector = bites;
}

bool BoolVector::notOperation() {
	if (boolVector.size() == 0)
		return false;

	for (int i = 0; i < boolVector.size(); i++)
	{
		if (boolVector[i] == 1) {
			boolVector[i] = 0;
		}
		else {
			boolVector[i] = 1;
		}
	}

	return true;
}

BoolVector BoolVector::andOperation(BoolVector otherVector) {

	// boolVector:				1 0 0 1 0 1
	// otherVector.boolVector:		  1 0 1
	

	//1. ���� ������� � �������� ������������������ (� ������ 6 �����, �� ������ 3);
	
	unsigned int maxSize = 0;
	unsigned int minSize = 0;

	if (boolVector.size() > otherVector.boolVector.size()) {
		maxSize = boolVector.size();
		minSize = otherVector.boolVector.size();
	}
	else {
		minSize = boolVector.size();
		maxSize = otherVector.boolVector.size();
	}
	// ��������� 1.

	// 2. ������� ������ ��� ���������� ���������� c �������� maxSize
	BoolVector resultVector;
	resultVector.boolVector.reserve(maxSize);
	resultVector.boolVector.resize(maxSize);
	
	// ��������� resultVector ������
	std::fill(resultVector.boolVector.begin(), resultVector.boolVector.begin(), 0);
	// ��������� 2.

	// 3. ������� ������� ��� ����������� �� ��������

	int lastIndexOfVector1 = boolVector.size() - 1,
		lastIndexOfVector2 = otherVector.boolVector.size() - 1,
		resultIndex = resultVector.boolVector.size()-1;

	// boolVector:				1 0 0 1 0 1 : lastIndexOfVector1 = 5
	// otherVector.boolVector:		  1 0 1 : lastIndexOfVector2 = 2
	// resultVector.boolVector:	0 0 0 0 0 0 : resultIndex = 5
	//							-----------


	/*	�������� ���������� ���� boolVector � otherVector.boolVector,
		������� � 5 �� 3 (lastIndexOfVector1) ������������ ��� boolVector �
		        � 2 �� 0 (lastIndexOfVector2) ������������ ��� otherVector.boolVector
		��� ������ lastIndexOfVector2 ������ ����� 0, ���������� ����.

		���� ������� while �������� ���������, �� ���������� ����:
		���� ��� ���� == 1, �� �������� ��� � resultVector ==1, ����� 0.
	*/
	while ( lastIndexOfVector1 >= 0 &&
		    lastIndexOfVector2 >= 0 ){

		if (boolVector[lastIndexOfVector1] == 1 &&
			otherVector.boolVector[lastIndexOfVector2] == 1){
			resultVector.boolVector[resultIndex] = 1;
		}
		else{
			resultVector.boolVector[resultIndex] = 0;
		}

		--lastIndexOfVector1;
		--lastIndexOfVector2;
		--resultIndex;
	}
	
	return resultVector;
}

BoolVector BoolVector::orOperation(BoolVector otherVector){

	// boolVector:				1 0 0 1 0 1
	// otherVector.boolVector:		  1 0 1

	
	unsigned int maxSize = 0;
	unsigned int minSize = 0;

	if (boolVector.size() > otherVector.boolVector.size()) {
		maxSize = boolVector.size();
		minSize = otherVector.boolVector.size();
	}
	else {
		minSize = boolVector.size();
		maxSize = otherVector.boolVector.size();
	}

	BoolVector resultVector;
	resultVector.boolVector.reserve(maxSize);
	resultVector.boolVector.resize(maxSize);

	std::fill(resultVector.boolVector.begin(), resultVector.boolVector.begin(), 0);

	int lastIndexOfVector1 = boolVector.size() - 1,
		lastIndexOfVector2 = otherVector.boolVector.size() - 1,
		resultIndex = resultVector.boolVector.size() - 1;

	while (lastIndexOfVector1 >= 0 &&
		lastIndexOfVector2 >= 0){
		
		// ������� �� andOperation - ���� 2 ���� ����� 0 �� ��������� 0, ����� 1
		if (boolVector[lastIndexOfVector1] == 0 &&
			otherVector.boolVector[lastIndexOfVector2] == 0){
			resultVector.boolVector[resultIndex] = 0;
		}
		else{
			resultVector.boolVector[resultIndex] = 1;
		}

		--lastIndexOfVector1;
		--lastIndexOfVector2;
		--resultIndex;
	}

	// �������� ���������� ����, ���� ��� ��������
	//          �� ���� ������� �� ������������
	//                              |
	// boolVector:				1 0 0 1 0 1 : lastIndexOfVector1 = 2
	// otherVector.boolVector:		  1 0 1 : lastIndexOfVector2 = -1
	// resultVector.boolVector:	0 0 0 1 0 1 : resultIndex = 2
	//							-----------


	if (lastIndexOfVector1 >= 0)
		std::copy(boolVector.begin(),
		boolVector.begin() + lastIndexOfVector1 + 1,
		resultVector.boolVector.begin());

	if (lastIndexOfVector2 >= 0)
		std::copy(otherVector.boolVector.begin(),
		otherVector.boolVector.begin() + lastIndexOfVector2 + 1,
		resultVector.boolVector.begin());
	
	
	return resultVector;
}

bool BoolVector::equalTo(BoolVector otherVector){
	return std::equal(boolVector.begin(), boolVector.end(), otherVector.boolVector.begin());
}

bool BoolVector::equalTo(BoolVector vector1, BoolVector vector2){
	return std::equal(vector1.boolVector.begin(), vector1.boolVector.end(), vector2.boolVector.begin());
}

unsigned BoolVector::getCountOfUnsetBit(){
	return std::count( boolVector.begin(), boolVector.end(), 0);
}

unsigned BoolVector::getCountOfSetBit(){
	return std::count(boolVector.begin(), boolVector.end(), 1);
}

BoolVector::~BoolVector(){
	std::cout << "Destructor activated!\n";
}

void BoolVector::printBites(){
	if (boolVector.size() == 0){
		std::cout << "BoolVector is empty.\n";
		return;
	}
	for (const unsigned char& bit : boolVector){
		std::cout << short(bit);
	}
	std::cout << std::endl;
}