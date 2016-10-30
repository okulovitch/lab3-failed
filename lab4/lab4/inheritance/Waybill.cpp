#include "Waybill.h"
#include<iostream>
#include<string>


Waybill::Waybill():Doc()
{
	weight = 0;
	size = 0;
	name= "";
	//std::cout << "Waybill::Default constructor activated" << std::endl;
}
Waybill::Waybill(unsigned int weight, unsigned int size, std::string name):Doc() {
	this->weight = weight;
	this->size = size;
	this->name= name;
	//std::cout << "Waybill::constructor with parametrs activated" << std::endl;
}
Waybill::Waybill(const Waybill &waybill):Doc(waybill) {
	this->weight = waybill.weight;
	this->size = waybill.size;
	this->name=waybill.name;
	//std::cout << "Waybill::copy constuctor activated" << std::endl;
}

std::string Waybill::getName()const {
	return name;
}
unsigned int Waybill::getSize()const {
	return size;
}
unsigned int Waybill::getWeight()const {
	return weight;
}


void Waybill::setName(std::string name) {
	this->name= name;
}
void Waybill::setSize(unsigned int size) {
	this->size = size;
}
void Waybill::setWeight(unsigned int weight) {
	this->weight = weight;
}

void Waybill::printOnScreen()const {
	std::cout << "================================" << std::endl;
	std::cout << "productName:" << name<<" "<<"size:"
		<<size<<" "<<"weight:"<<weight<<std::endl;
	std::cout << "name of class:" << typeid(this).name() << std::endl;
}
Waybill::~Waybill()
{
	//std::cout << "Waybill::destructor activated" << std::endl;
}
