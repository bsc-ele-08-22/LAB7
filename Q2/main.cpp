#include <iostream>
#include "Rectangle.h"

int main() {
    Rectangle Rec2;

    float length;
    float width;
    
    std::cout << "Enter length of rectangle: ";
    std::cin >> length;
    Rec2.setLength(length);

    std::cout << "Enter width of rectangle: ";
    std::cin >> width;
    Rec2.setWidth(width);

    std::cout << "Area of rectangle 1: " << Rec2.calculateArea(length, width) << std::endl;
    
    cout<<"\nenter the length and width of Rectangle 2"<<endl;
    std::cin >> length >> width;

    Rectangle rect2(length, width);
        std::cout << "Area of rectangle 2: " << rect2.calculateArea(length, width) << std::endl;
    return 0;
}