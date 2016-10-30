#pragma once
#include "Date.h"
#include <iostream>

using namespace std;
class Doc
{
public:
	class Number {
	private:
		int value;
	public:
		Number(){
		}
		int getValue() {
			return value;
		}
		void setValue(int value) {
			this->value = value;
		}

	};
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
	Number number;
	std::string name;
	std::string information;
	Date createDate;
};

