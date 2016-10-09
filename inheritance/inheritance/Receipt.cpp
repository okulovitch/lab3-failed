#include "Receipt.h"
#include<iostream>
#include <string>


Receipt::Receipt():Doc()
{
	waterCost = 0;
	electrisityCost = 0;
	std::cout << "Recepit::Default constructor activated" << std::endl;
}
Receipt::Receipt(unsigned int waterCost, unsigned int electrisityCost, std::string name):Doc() {
	this->waterCost = waterCost;
	this->electrisityCost = electrisityCost;
	this->name = name;
	std::cout << "Receipt::constructor with parametrs activated"
		<< std::endl;
}
Receipt::Receipt(const Receipt &receipt):Doc(receipt) {
	this->waterCost = receipt.waterCost;
	this->electrisityCost = receipt.electrisityCost;
	this->name = receipt.name;
	std::cout << "Receipt::copy constuctor activated" << std::endl;
}
unsigned int Receipt::getElectrisityCost() {
	return electrisityCost;
}
unsigned int Receipt::getWaterCost() {
	return waterCost;
}
std::string Receipt::getName() {
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

void Receipt::printOnScreen() {
	std::cout << "================================" << std::endl;
	std::cout <<"electrisityCost:"<<electrisityCost
		<<"waterCost:"<<waterCost<<"adres:" << name<< std::endl;
}
Receipt::~Receipt()
{
}
