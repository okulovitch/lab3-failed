#include "Waybill.h"
#include<iostream>
#include<string>


Waybill::Waybill():Doc()
{
	weight = 0;
	size = 0;
	product = "";
	std::cout << "Waybill::Default constructor activated" << std::endl;
}
Waybill::Waybill(unsigned int weight, unsigned int size, std::string product):Doc() {
	this->weight = weight;
	this->size = size;
	this->product = product;
	std::cout << "Waybill::constructor with parametrs activated" 
		<< std::endl;
}
Waybill::Waybill(const Waybill &waybill):Doc(waybill) {
	this->weight = waybill.weight;
	this->size = waybill.size;
	this->product =waybill.product;
	std::cout << "Waybill::copy constuctor activated" << std::endl;
}

std::string Waybill::getProduct() {
	return product;
}
unsigned int Waybill::getSize() {
	return size;
}
unsigned int Waybill::getWeight() {
	return weight;
}


void Waybill::setProduct(std::string product) {
	this->product = product;
}
void Waybill::setSize(unsigned int size) {
	this->size = size;
}
void Waybill::setWeight(unsigned int weight) {
	this->weight = weight;
}

void Waybill::printOnScreen() {
	std::cout << "================================" << std::endl;
	std::cout << "productName:" << product <<" "<<"size:"
		<<size<<" "<<"weight:"<<weight<<std::endl;
}
Waybill::~Waybill()
{
	std::cout << "Waybill::destructor activated" << std::endl;
}
