#include <iostream>

using std::cout;
using std::endl;

struct Date {
    int year;
    int month;
    int day;
};

int main() {
	Date date = {2019,10,3};
    Date* date_ptr = &date;
    
    cout << date.year << "/" << date.month << "/" << date.day << endl;
    cout << date_ptr->year << "/" << date_ptr->month << "/" << date_ptr->day << endl;
    cout << (*date_ptr).year << "/" << (*date_ptr).month << "/" << (*date_ptr).day << endl;
    
    int* i = new int;
    *i = 13;
    cout << *i << endl;
    
    delete i;
    
}