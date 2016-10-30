#pragma once

#include<iostream>
#include"Check.h"

class PapaerCheck:public Check {

public:
	 void printOnScreen() const {
		std::cout << typeid(this).name() << std::endl;
	}
};