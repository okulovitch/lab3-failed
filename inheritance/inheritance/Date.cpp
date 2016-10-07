#include "Date.h"
#include<iostream>


Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
	std::cout << "Date::Default constructor activated" << std::endl;

}
Date::Date(unsigned short day, unsigned short month, unsigned short year) {
	this->day = day;
	this->month = month;
	this->year = year;
	std::cout << "Date::constructor with parametrs activated" << std::endl;
}
Date::Date(const Date &date) {
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
	std::cout << "Date::copy constuctor activated" << std::endl;
}
unsigned short Date::getDay() {
	return day;
}
unsigned short Date::getMonth() {
	return month;
}
unsigned short Date::getYear() {
	return year;
}


void Date::setDay(unsigned short day) {
	this->day = day;
}
void Date::setMonth(unsigned short month) {
	this->month = month;
}
void Date::setYear(unsigned short year) {
	this->year = year;
}

void Date::printOnScreen() {
	std::cout << day << "." << month << "." << year << std::endl;
}
Date::~Date()
{
	std::cout << "Date::destructor activated" <<std::endl;
}
