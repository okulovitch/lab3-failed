#pragma once
#include "Doc.h"
class Check:public Doc
{
public:
	Check();
	Check(unsigned short time, unsigned int countOfPurchases, unsigned int cost);
	Check(const Check &check);

	unsigned short getTime();
	unsigned int getCountOfPurchases();
	unsigned int getCost();

	void setTime(unsigned short time);
	void setCountOfPurchases(unsigned int countOfPurchases);
	void setCost(unsigned int cost);
	void printOnScreen();
	~Check();
private:
	unsigned short time;
	unsigned int countOfPurchases;
	unsigned int cost;

};

