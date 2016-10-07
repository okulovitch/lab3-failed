#pragma once
#include "Date.h"
#include <iostream>

using namespace std;
class Doc
{

public:
	Doc();
	Doc(string name, string information);
	Doc(const Doc &doc);

	 std::string Doc::getName();
	 std::string Doc::getInformation();

	void setName(std::string name);
	void setInfo(std::string informaition);

	void printOnScreen();
	
	
	~Doc();
private:
	std::string name;
	std::string information;
	
};

