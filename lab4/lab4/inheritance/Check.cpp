#include "Check.h"
#include<iostream>


Check::Check():Doc()
{
	this->countOfPurchases = 0;
	this->cost = 0;

	//std::cout << "Check::Default constructor activated" << std::endl;
}
Check::Check( unsigned int countOfPurchases, unsigned int cost,std::string name):Doc() {

	this->countOfPurchases = countOfPurchases;
	this->cost = cost;
	//std::cout << "Check::constructor with parametrs activated" << std::endl;
}
Check::Check(const Check &check):Doc(check) {
	
	this->countOfPurchases = check.countOfPurchases;
	this->cost = check.cost;
	//std::cout << "Check::copy constuctor activated" << std::endl;
}
unsigned int Check::getCost() const {
	return cost;
}
unsigned int Check::getCountOfPurchases()const {
	return countOfPurchases;
}
std::string Check::getName()const {
	return name;
}

void Check::setName(std::string name) {
	this->name = name;
}

void Check::setCost(unsigned int cost) {
	this->cost = cost;
}
void Check::setCountOfPurchases(unsigned int countOfPurchases) {
	this->countOfPurchases = countOfPurchases;
}
void Check::printOnScreen()const {
	std::cout << "================================" << std::endl;
	std::cout << "cost:" << cost << "\n" <<
		"countOfPurchases:" << countOfPurchases << std::endl;
	std::cout << "name of class:" << typeid(this).name() << std::endl;
}
Check::~Check()
{
	//std::cout << "Check::destructor activated" << std::endl;
}
