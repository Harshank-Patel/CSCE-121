#include <iostream>

// const char* := pointer to a constant char (the array values can't change)
unsigned int strlen(const char* arr) {
    unsigned int len = 0;
    while (*arr) {
        len++;
        arr++;
    }
    return len;
} 

int main() {
    char A[] = "hello world";
    std::cout << strlen(A) << std::endl;
    return 0;
}
