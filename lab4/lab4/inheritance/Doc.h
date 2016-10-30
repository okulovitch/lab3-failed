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

	virtual std::string getName()const=0 ;
	 std::string getInformation() const;
	 Date getDate() const;

	virtual void setName(std::string name)=0;
	void setInfo(std::string informaition);
	void setDate(Date date);
	virtual void printOnScreen() const ;
	
	static int getCounter() {	//static - можно вызвать без создания obj
		//будет выполняться только один раз. Всякий раз, когда функция вызывается, count будет иметь последнее значение, данное ему.
		return counterOfDoc;
	}
	
	virtual ~Doc();


private:
	static int counterOfDoc;
	std::string name;
	std::string information;
	Date createDate;
	const int countOfDocuments=100;
};


