#include "Doc.h"
#include<iostream>



Doc::Doc()
{
	std::string name = "";
	std::string information = "";
	std::cout << "Doc::Default constructor activated" << std::endl;
}
Doc::Doc(std::string name, std::string information) {
	this->name = name;
	this->information = information;
	std::cout << "Doc::constructor with parametrs activated" << std::endl;
}

Doc::Doc(const Doc &doc) {
	this->name = doc.name;
	this->information = doc.information;
	std::cout << "Doc:copy constuctor activated" << std::endl;
}
std::string Doc::getName() {
	return name;
}
std::string Doc::getInformation() {
	return information;
}

void Doc::setName(std::string name) {
	this->name = name;
}
void Doc::setInfo(std::string information) {
	this->information = information;
}

Doc::~Doc()
{
	std::cout << "Doc::destructor activated" << std::endl;
}
