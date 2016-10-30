#pragma once
#include <iostream>
#include"Doc.h"
class Waybill :public Doc
{
public:



	Waybill();
	Waybill(unsigned int weight, unsigned int size, std::string name);//std::string name
	Waybill(const Waybill &waybill);
	
	unsigned int getWeight()const;
	unsigned int getSize()const;
	std::string getName()const;//get name

	void setWeight(unsigned int weight);
	void setSize(unsigned int size);
	void setName(std::string name);//set name

	void printOnScreen()const;
	virtual ~Waybill();
private:
	unsigned int weight;
	unsigned int size;
	std::string name;
};

