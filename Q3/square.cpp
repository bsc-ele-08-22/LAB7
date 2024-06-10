#include "square.h"

using namespace shapes;

Square::Square() {
    Length = 0;
} 

Square::Square(double side) {
    Length = side;
} 

double Square::getLength() const {
    return Length;
}

Square::~Square() {
    
}