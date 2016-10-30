#pragma once
#include <iostream>
#include "Date.h"


void iCanModify(Date& date) {
	date.day++;
	date.month++;
	date.year = 2025;
}
