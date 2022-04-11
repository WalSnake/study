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

//Task #2
class Car {
protected:
    std::string company;
    std::string model;
public:
    Car() {}
    Car(std::string company, std::string model) {
        this->company = company;
        this->model = model;
        std::cout << "Car: " << company << " " << model << std::endl;
    }
};

class PassengerCar : public Car {
public:
    PassengerCar() {}
    PassengerCar(std::string company, std::string model) {
        this->company = company;
        this->model = model;
        std::cout << "Passenger Car: " << company << " " << model << std::endl;
    }
};

class Bus : public Car {
protected:
    std::string company;
    std::string model;
public:
    Bus() {}
    Bus(std::string company, std::string model) {
        this->company = company;
        this->model = model;
        std::cout << "Bus: " << company << " " << model << std::endl;
    }
};

class Minivan : public PassengerCar, public Bus {
protected:
    std::string company;
    std::string model;
public:
    Minivan() {}
    Minivan(std::string company, std::string model) {
        this->company = company;
        this->model = model;
        std::cout << "Minivan: " << company << " " << model << std::endl;
    }
};
/* 
//I have no idea what I should to do in this task
//Task #3
class fraction {
    int numerator;
    int denominator;
    fraction(int numerator, int denuminator) {

};
*/

//Task#4
class Card {
    enum suit { Hearts, Tiles, Clovers, Pikes };
    std::string value;
    bool face;
    bool flip(bool face) {
        if (face = 0) {
            face = 1;
        }
        else {
            face = 0;
        }
    };
    int getValue(std::string value)
    if (value = "A") { return 1 };
    if (value = "2" || "J") { return 2 };
    if (value = "3" || "Q") { return 3 };
    if (value = "4" || "K") { return 4 };
    if (value = "5") { return 5 };
    if (value = "6") { return 6 };
    if (value = "7") { return 7 };
    if (value = "8") { return 8 };
    if (value = "9") { return 9 };
    if (value = "10") { return 10 };
};

int main()
{
    Car c1("Ford", "Model T");
    Car c2("Wolksvagen", "Bitle");
    PassengerCar pc1("Toyota", "Camry");
    PassengerCar pc2("Peugeot", "406");
    Bus b1("Scania", "some model");
    Bus b2("Mercedes", "whatever model");
    Minivan m1("Mitsubishi", "Delica");
    Minivan m2("Honda", "Odyssey");
    //I didn't understood, what is "diamond of death"...
}