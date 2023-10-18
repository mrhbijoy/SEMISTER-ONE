#include <iostream>
#include <cmath>

using namespace std;

// Base class Shape
class Shape {
    public:
        virtual float calculateArea() = 0; // Pure virtual function
};

// Derived class Rectangle
class Rectangle : public Shape {
    private:
        float length;
        float width;
    public:
        Rectangle(float l, float w) {
            length = l;
            width = w;
        }
        float calculateArea() {
            return length * width;
        }
};

// Derived class Circle
class Circle : public Shape {
    private:
        float radius;
    public:
        Circle(float r) {
            radius = r;
        }
        float calculateArea() {
            return M_PI * pow(radius, 2);
        }
};

// Derived class Triangle
class Triangle : public Shape {
    private:
        float base;
        float height;
    public:
        Triangle(float b, float h) {
            base = b;
            height = h;
        }
        float calculateArea() {
            return 0.5 * base * height;
        }
};

int main() {
    // Create instances of Rectangle, Circle, and Triangle objects
    Rectangle rect(5, 10);
    Circle circle(7);
    Triangle triangle(4, 6);

    // Call the calculateArea() method for each shape
    cout << "Area of Rectangle: " << rect.calculateArea() << endl;
    cout << "Area of Circle: " << circle.calculateArea() << endl;
    cout << "Area of Triangle: " << triangle.calculateArea() << endl;

    return 0;
}
