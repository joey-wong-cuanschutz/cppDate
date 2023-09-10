#include <iostream>
#include "Date.h"

int main()
{

    int changeMonth = 0;
    int changeDay = 0;
    int changeYear = 0;

    Date first_date(4, 8, 1994);

    std::cout << first_date.getDate();

    std::cout << "\nChange month\n" << std::endl;
    std::cin >> changeMonth;
    first_date.setMonth(changeMonth);

    std::cout << "\nChange day\n" << std::endl;
    std::cin >> changeDay;
    first_date.setDay(changeDay);

    std::cout << "\nChange year\n" << std::endl;
    std::cin >> changeYear;
    first_date.setYear(changeYear);

    std::cout << "The new date is: " << first_date.getDate() << std::endl;

};