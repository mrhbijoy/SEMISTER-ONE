#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Base class Car
class Car {
protected:
    string name;
    int speed;
    int acceleration;
    int handling;
    int position;
public:
    Car(string n, int s, int a, int h) {
        name = n;
        speed = s;
        acceleration = a;
        handling = h;
        position = 0;
    }
    virtual void accelerate() = 0;
    virtual void brake() = 0;
    virtual void turn() = 0;
    void move() {
        position += speed;
    }
    int getPosition() {
        return position;
    }
    string getName() {
        return name;
    }
};

// Derived class FormulaCar
class FormulaCar : public Car {
public:
    FormulaCar(string n, int s, int a, int h) : Car(n, s, a, h) {}
    void accelerate() {
        speed += acceleration;
    }
    void brake() {
        speed -= acceleration;
    }
    void turn() {
        position += handling;
    }
};

// Derived class StockCar
class StockCar : public Car {
public:
    StockCar(string n, int s, int a, int h) : Car(n, s, a, h) {}
    void accelerate() {
        speed += acceleration / 2;
    }
    void brake() {
        speed -= acceleration / 2;
    }
    void turn() {
        position += handling / 2;
    }
};

// Derived class SportsCar
class SportsCar : public Car {
public:
    SportsCar(string n, int s, int a, int h) : Car(n, s, a, h) {}
    void accelerate() {
        speed += acceleration * 2;
    }
    void brake() {
        speed -= acceleration * 2;
    }
    void turn() {
        position += handling * 2;
    }
};

int main() {
    srand(time(NULL));
    vector<Car*> cars;
    cars.push_back(new FormulaCar("Formula 1", 100, 10, 20));
    cars.push_back(new StockCar("Stock Car", 80, 8, 16));
    cars.push_back(new SportsCar("Sports Car", 120, 12, 24));
    int distance = 1000;
    while (true) {
        for (int i = 0; i < cars.size(); i++) {
            cars[i]->accelerate();
            cars[i]->turn();
            cars[i]->move();
            if (cars[i]->getPosition() >= distance) {
                cout << cars[i]->getName() << " wins!" << endl;
                return 0;
            }
        }
    }
    return 0;
}
