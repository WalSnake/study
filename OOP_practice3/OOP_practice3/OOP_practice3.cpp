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