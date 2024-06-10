#include <iostream>
#include "Rectangle.h"

int main() {
    
    Rectangle Rec1;

    float length;
    float width;
    
    std::cout << "Enter length: ";
    std::cin >> length;
    Rec1.setLength(length);

    std::cout << "Enter width: ";
    std::cin >> width;
    Rec1.setWidth(width);

    
    std::cout << "Area of your rectangle : " << Rec1.calculateArea(length, width) << std::endl;


    return 0;
}