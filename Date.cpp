// implmentation file
#include "Date.h"
#include <string>


Date::Date(int dayValue, int monthValue, int yearValue)
{
    day = dayValue;
    month = monthValue;
    year = yearValue;
}


// define how to use the functions 

void Date::setDay(int dayValue){
    day = dayValue;
}
void Date::setMonth(int monthValue){
    month = monthValue;
}
void Date::setYear(int yearValue){
    year = yearValue;
}
void Date::setDate(int dayValue, int monthValue, int yearValue){
    day = dayValue;
    month = monthValue;
    year = yearValue;
}

// define the get functions 

int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}

// define the date and convert the ints to string for output 

std::string Date::getDate()
{
    return std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
}
