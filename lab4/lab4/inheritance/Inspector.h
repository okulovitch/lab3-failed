#pragma once
#include <iostream>
#include "Date.h"
class Inspector {
public:
	void iKnowAllAboutYou(Date& date) {
		std::cout << date.day << " " << date.month 
			<< " " << date.year << std::endl;
	}

};