#include <iostream>

using std::cout;
using std::endl;

struct Color {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
};

int main() {
    struct Color maroon = {80, 0, 0};
    
    cout << "(" << int(maroon.red) << ", " << int(maroon.green) << ", " << int(maroon.blue) << ")" << endl;
    
    struct Color* maroon_ptr = &maroon; 
    
    cout << "(" << int(maroon_ptr->red) << ", " << int(maroon_ptr->green) << ", " << int(maroon_ptr->blue) << ")" << endl;
    
    cout << "(" << int((*maroon_ptr).red) << ", " << int((*maroon_ptr).green) << ", " << int((*maroon_ptr).blue) << ")" << endl;
    
    struct Color* color = new struct Color;
    color->red = 123;
    color->green = 87;
    color->blue = 75;
    cout << "(" << int(color->red) << ", " << int(color->green) << ", " << int(color->blue) << ")" << endl;
    
    delete color;
}