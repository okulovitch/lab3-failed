#pragma once
#include<iostream>
#include"Doc.h"
class Receipt:public Doc//kvitansia
{
public:
	Receipt();
	Receipt(unsigned int waterCost, unsigned int electrisityCost, std::string name);
	Receipt(const Receipt &receipt);
	

	unsigned int getWaterCost();
	unsigned int getElectrisityCost();
	std::string
		getName();
	void setWaterCost(unsigned int waterCost);
	void setElectrisityCost(unsigned int electrisityCost);
	void setName(std::string name);

	void printOnScreen();


	~Receipt();
private:
	unsigned int waterCost;
	unsigned int electrisityCost;
	std::string name;

};

