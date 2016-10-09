#pragma once
#include "Date.h"
#include <iostream>

using namespace std;
class Doc
{

public:
	Doc();
	Doc(Date createDate,string name, string information);
	Doc(const Doc &doc);

	virtual std::string getName();
	 std::string getInformation();
	 Date getDate();

	virtual void setName(std::string name);
	void setInfo(std::string informaition);
	void setDate(Date date);
	virtual void printOnScreen();
	
	
	~Doc();
private:
	std::string name;
	std::string information;
	Date createDate;
};

