#include "Check.h"
#include<iostream>


Check::Check():Doc()
{
	std::cout << "Check::Default constructor activated" << std::endl;
}
Check::Check( unsigned int countOfPurchases, unsigned int cost):Doc() {

	this->countOfPurchases = countOfPurchases;
	this->cost = cost;
	std::cout << "Check::constructor with parametrs activated" << std::endl;
}
Check::Check(const Check &check):Doc(check) {
	
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


void Check::setCost(unsigned int cost) {
	this->cost = cost;
}
void Check::setCountOfPurchases(unsigned int countOfPurchases) {
	this->countOfPurchases = countOfPurchases;
}
void Check::printOnScreen() {
	std::cout << "================================" << std::endl;
	std::cout << "cost:" << cost << "\n" <<
		"countOfPurchases:" << countOfPurchases << std::endl;
}
Check::~Check()
{
	std::cout << "Check::destructor activated" << std::endl;
}
