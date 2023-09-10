// declaration/interface file

#include <iostream>
#include <string>

class Date
{
    public:
        explicit Date(int dayValue, int monthValue, int yearValue);
        // set date
        void setDay(int dayValue);
        void setMonth(int monthValue);
        void setYear (int yearValue);

        void setDate(int dayValue, int monthValue, int yearValue);

        // get date

        int getDay();
        int getMonth();
        int getYear();

        std::string getDate();

    private:
        // variables and data 
        int day;
        int month;
        int year;

};