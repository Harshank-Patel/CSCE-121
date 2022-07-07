#include <iostream>

using std::cin;
using std::cout;
using std::endl;

typedef struct Date {
    short day;
    short month;
    short year;
} Date;


short dow(const Date date) {
    short d = date.day;
    short m = date.month;
    short y = date.year;
	y -= m<3;
	return (y+y/4-y/100+y/400+"-bed=pen+mad."[m]+d)%7;
}

int main() {
	short day, month, year;
	cin >> day >> month >> year;
    Date date = {day, month, year};
	cout << dow(date) << endl;
}