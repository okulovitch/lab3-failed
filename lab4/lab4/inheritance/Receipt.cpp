#include "Receipt.h"
#include<iostream>
#include <string>


Receipt::Receipt():Doc()
{
	waterCost = 0;
	electrisityCost = 0;
	//std::cout << "Recepit::Default constructor activated" << std::endl;
}
Receipt::Receipt(unsigned int waterCost, unsigned int electrisityCost, std::string name):Doc() {
	this->waterCost = waterCost;
	this->electrisityCost = electrisityCost;
	this->name = name;
	//std::cout << "Receipt::constructor with parametrs activated"<< std::endl;
}
Receipt::Receipt(const Receipt &receipt):Doc(receipt) {
	this->waterCost = receipt.waterCost;
	this->electrisityCost = receipt.electrisityCost;
	this->name = receipt.name;
	//std::cout << "Receipt::copy constuctor activated" << std::endl;
}
unsigned int Receipt::getElectrisityCost()const {
	return electrisityCost;
}
unsigned int Receipt::getWaterCost()const {
	return waterCost;
}
std::string Receipt::getName()const {
	return name;
}

void Receipt::setElectrisityCost(unsigned int electrisityCost) {
	this->electrisityCost = electrisityCost;
}
void Receipt::setWaterCost(unsigned int waterCost) {
	this->waterCost = waterCost;
}
void Receipt::setName(std::string name) {
	this->name = name;
}

void Receipt::printOnScreen()const {
	std::cout << "================================" << std::endl;
	std::cout <<"electrisityCost:"<<electrisityCost<<" "
		<<"waterCost:"<<waterCost<<" "<<"adress:" << name<< std::endl;
	std::cout << "name of class:" << typeid(this).name() << std::endl;
}
 Receipt:: ~Receipt()
{
	//std::cout << "Receipt destructor activated" << std::endl;
}
