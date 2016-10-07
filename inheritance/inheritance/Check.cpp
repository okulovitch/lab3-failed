#include "Check.h"
#include<iostream>


Check::Check()
{
	std::cout << "Check::Default constructor activated" << std::endl;
}
Check::Check(unsigned short time, unsigned int countOfPurchases, unsigned int cost) {
	this->time = time;
	this->countOfPurchases = countOfPurchases;
	this->cost = cost;
	std::cout << "Check::constructor with parametrs activated" << std::endl;
}
Check::Check(const Check &check) {
	this->time = check.time;
	this->countOfPurchases = check.countOfPurchases;
	this->cost = check.cost;
	std::cout << "Check::copy constuctor activated" << std::endl;
}
unsigned int Check::getCost() {
	return cost;
}
unsigned int Check::getCountOfPurchases() {
	return countOfPurchases;
}
unsigned short Check::getTime() {
	return time;
}

void Check::setCost(unsigned int cost) {
	this->cost = cost;
}
void Check::setCountOfPurchases(unsigned int countOfPurchases) {
	this->countOfPurchases = countOfPurchases;
}
void Check::setTime(unsigned short time) {
	this->time = time;
}
void Check::printOnScreen() {
	std::cout << "cost:" << cost << "\n" <<
		"countOfPurchases:" << countOfPurchases << "\n" <<
		"time:" << time << std::endl;
}
Check::~Check()
{
	std::cout << "Check::destructor activated" << std::endl;
}
