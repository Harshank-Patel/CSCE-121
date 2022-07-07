#ifndef MYSORT_H
#define MYSORT_H

#include <functional>

void mySort(int A[], const int len, std::function<bool(int,int)> LT);

#endif