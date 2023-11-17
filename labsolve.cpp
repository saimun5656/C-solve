// A point on the circumference of a circle whose center is (0,0) is (4,5). Write down a C++ program to compute perimeter and area of the circle.

#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculatePerimeter() {
        return 2 * M_PI * radius;
    }

    double calculateArea() {
        return M_PI * pow(radius, 2);
    }
};

int main() {
    // Coordinates of the center
    double centerX = 0;
    double centerY = 0;

    // Coordinates of the point on the circumference
    double pointX = 4;
    double pointY = 5;

    // Calculate the radius using the distance formula
    double radius = sqrt(pow(pointX - centerX, 2) + pow(pointY - centerY, 2));

    // Creating a circle object with the calculated radius
    Circle myCircle(radius);

    // Calculating perimeter and area
    double perimeter = myCircle.calculatePerimeter();
    double area = myCircle.calculateArea();

    // Displaying the results
    std::cout << "Radius of the circle: " << radius << std::endl;
    std::cout << "Perimeter of the circle: " << perimeter << std::endl;
    std::cout << "Area of the circle: " << area << std::endl;

    return 0;
}
