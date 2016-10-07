#pragma once
#include <iostream>
#include"Doc.h"
class Waybill:public Doc
{
public:
	Waybill();
	Waybill(unsigned int weight, unsigned int size, std::string product);
	Waybill(const Waybill &waybill);
	
	unsigned int getWeight();
	unsigned int getSize();
	std::string getProduct();

	void setWeight(unsigned int weight);
	void setSize(unsigned int size);
	void setProduct(std::string product);

	void printOnScreen();
	~Waybill();
private:
	unsigned int weight;
	unsigned int size;
	std::string product;
};

