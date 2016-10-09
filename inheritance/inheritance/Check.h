#pragma once
#include "Doc.h"
class Check:public Doc
{
public:
	Check();
	Check( unsigned int countOfPurchases, unsigned int cost);
	Check(const Check &check);

	unsigned int getCountOfPurchases();
	unsigned int getCost();

	void setCountOfPurchases(unsigned int countOfPurchases);
	void setCost(unsigned int cost);
	void printOnScreen();
	~Check();
private:
	unsigned int countOfPurchases;
	unsigned int cost;

};

