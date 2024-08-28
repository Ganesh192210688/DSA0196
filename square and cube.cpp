#include<iostream>
using namespace std;

class Power {
public:
    double square;
    double cube;

    Power(double s) : square(s * s), cube(s * s * s) {}
};

class Square : public Power {
public:
    Square(double s) : Power(s) {}

    void calculate(double& sq, double& cb) {
        sq = square;
        cb = cube;
    }
};

int main() {
    double a;
    cout << "Enter a number: ";
    cin >> a;

    Square l(a);
    double sq, cb;
    l.calculate(sq, cb);

    cout << "Square of " << a << " is: " << sq << endl;
    cout << "Cube of " << a << " is: " << cb << endl;

    return 0;
}