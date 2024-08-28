#include <iostream>
#include <cmath> 
using namespace std;

double areaOfCircle(double radius) {
    return M_PI * radius * radius;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = areaOfCircle(radius);
    cout << "Area of the circle is: " << area << endl;

    return 0;
}
