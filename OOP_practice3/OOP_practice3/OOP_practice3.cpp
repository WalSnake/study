#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

//Task #1
class figure {
public:
    virtual float area() = 0;
};

class rectangle : public figure {
    float sideA;
    float sideB;
    float area() override {
        float area = sideA * sideB;
        return area;
    }
};

class square : public rectangle {
    float side;
    float area() override {
        float area = pow(2, side);
        return area;
    };
};

class rhombus : public rectangle {
    float side;
    int angle;
    float area() override {
        float area = side * sin(angle * M_PI / 180);
        return area;
    };
};

class circle : public figure {
    float radius;
    float area() override {
        float area = M_PI * pow(2, radius);
        return area;
    };
};

int main()
{
    
}