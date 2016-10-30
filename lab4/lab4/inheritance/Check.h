#pragma once
#include "Doc.h"
class Check:public Doc
{
public:
	
	Check();
	Check( unsigned int countOfPurchases, unsigned int cost,std::string name);
	Check(const Check &check);

	unsigned int getCountOfPurchases()const;
	unsigned int getCost()const;
	std::string getName()const;

	void setName(std::string name);
	void setCountOfPurchases(unsigned int countOfPurchases);
	void setCost(unsigned int cost);
	void printOnScreen()const;
	virtual ~Check();
private:
	unsigned int countOfPurchases;
	unsigned int cost;
	std::string name;
};

