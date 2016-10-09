#include "Doc.h"
#include<iostream>
#include <string>

Doc::Doc()
{
	 this->createDate = { 0,0,0 };
	 this->name = "";
	 this->information = "";
	std::cout << "Doc::Default constructor activated" << std::endl;
}
Doc::Doc(Date createDate,std::string name, std::string information) {
	this->createDate = createDate;
	this->name = name;
	this->information = information;
	std::cout << "Doc::constructor with parametrs activated" << std::endl;
}

Doc::Doc(const Doc &doc) {
	this->createDate = doc.createDate;
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
Date Doc::getDate() {
	return createDate;
}

void Doc::setName(std::string name) {
	this->name = name;
}
void Doc::setInfo(std::string information) {
	this->information = information;
}
void Doc::setDate(Date date) {
	this->createDate = date;
}
void Doc::printOnScreen() {
	std::cout << "=====================" << std::endl;
	std::cout << "date:" << std::endl;
	createDate.printOnScreen();
	std::cout << "name:" << name << " "
			  << "information:" << information << std::endl;
}

Doc::~Doc()
{
	std::cout << "Doc::destructor activated" << std::endl;
}
