#pragma once
#include<iostream>
#include"Doc.h"
class Receipt:protected Doc//kvitansia
{
public:

	class GetCost {
	public:
		friend Receipt;
		void setCost() {
		void setWaterCost(unsigned int waterCost);
		}
		void getCost() {
			unsigned int getElectrisityCost();
		}
		void print() {
			void printOnScreen();
		}

	};
	Receipt();
	Receipt(unsigned int waterCost, unsigned int electrisityCost, std::string name);
	Receipt(const Receipt &receipt);
	

	unsigned int getWaterCost()const;
	unsigned int getElectrisityCost()const;
	std::string getName()const;
	void setWaterCost(unsigned int waterCost);
	void setElectrisityCost(unsigned int electrisityCost);
	void setName(std::string name);

	void printOnScreen()const;


	virtual ~Receipt();
private:
	unsigned int waterCost;
	unsigned int electrisityCost;
	std::string name;

};

