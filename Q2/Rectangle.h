#pragma once
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); 
    Rectangle(float len, float wid); 
    ~Rectangle(); 

    void setLength(float len);
    void setWidth(float wid);
    float getLength() const;
    float getWidth() const;

    float calculateArea(float len, float wid) const;
};