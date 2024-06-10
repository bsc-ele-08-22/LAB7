#pragma once
#include<string>
using namespace std;

namespace shapes {
    class Square {
    private:
        double Length;
    public:
        Square();
        Square(double side);
        double getLength() const;
        ~Square();
    };
}