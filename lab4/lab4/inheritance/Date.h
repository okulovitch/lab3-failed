#pragma once


class Inspector;
class Date
{
public:
	Date();
	Date(unsigned short day, unsigned short month, unsigned short year);
	Date(const Date &date);
	unsigned short getDay();
	unsigned short getMonth();
	unsigned short getYear();

    void setDay(unsigned short day);
	void setMonth(unsigned short month);
	void setYear(unsigned short year);
	
	void printOnScreen()const;
	
	virtual ~Date();
private:
	friend Inspector;
	friend void iCanModify(Date& date);
	unsigned short day;
	unsigned short month;
	unsigned short year;
};

