#include "Doc.h"
#include<iostream>
#include <string>


int Doc::counterOfDoc = 0;
Doc::Doc()
{
	 this->createDate = { 0,0,0 };
	 this->name = "";
	 this->information = "";
	//std::cout << "Doc::Default constructor activated" << std::endl;
	counterOfDoc++;
}
Doc::Doc(Date createDate,std::string name, std::string information) {
	this->createDate = createDate;
	this->name = name;
	this->information = information;
	//std::cout << "Doc::constructor with parametrs activated" << std::endl;
	counterOfDoc++;
}

Doc::Doc(const Doc &doc) {
	this->createDate = doc.createDate;
	this->name = doc.name;
	this->information = doc.information;
	//std::cout << "Doc:copy constuctor activated" << std::endl;
	counterOfDoc++;
}
std::string Doc::getName()const {
	return name;
}
std::string Doc::getInformation() const {
	return information;
}
Date Doc::getDate() const {
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
void Doc::printOnScreen() const{
	std::cout << "=====================" << std::endl;
	std::cout << "date:" << std::endl;
	createDate.printOnScreen();
	std::cout << "name:" << name << " "
			  << "information:" << information << std::endl;
	std::cout << "name of class:" << typeid(this).name() << std::endl;
}


Doc::~Doc()
{
	//std::cout << "Doc::destructor activated" << std::endl;
	counterOfDoc--;
}
