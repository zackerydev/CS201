#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string make;
    int price;


};

int main() {
    Car car1, car2, car3;
    car1.make = "jeep";
    car1.price = 1000;
    car2.make = "lexus";
    car2.price = 2000;
    car3.make = "ford";
    car3.price = 1500;

    cout << "Car 1 is a " << car1.make << " Price of Car 1 is " << car1.price << endl;
    cout << "Car 2 is a " << car2.make << " Price of Car 2 is " << car2.price << endl;
    cout << "Car 3 is a " << car3.make << " Price of Car 3 is " << car3.price << endl;

    return 0;
}