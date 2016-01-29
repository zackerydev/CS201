#include <iostream>
#include <string>
#include <math.h>
using namespace std;


double get_interest_rate(int score) {
    if (score <= 500) {
        return 0.05;
    }
    else if (score > 500 && score < 700) {
        return 0.02;
    }
    else if (score >= 700) {
        return 0.01;
    }
}

double total_payment(double interest_rate, double price, double down_payment, int years) {
    double A = (((price - down_payment)*pow((1 + interest_rate), years)) / (12 * years));
    return A;
}


double Car_Menu() {
    double Car1_Price, Car2_Price, Car3_Price;
    string Car1, Car2, Car3;
    Car1 = "Honda Civic";
    Car2 = "Chrysler LeBaron";
    Car3 = "Jeep Grand Cherokee";

    Car1_Price = 10000.00;
    Car2_Price = 15000.00;
    Car3_Price = 20000.00;

    cout << Car1 << " For $" << Car1_Price << " Use '1' to choose" << endl;
    cout << Car2 << " For $" << Car2_Price << " Use '2' to choose" << endl;
    cout << Car3 << " For $" << Car3_Price << " Use '3' to choose" << endl;

    int user_choice;
    while (true) {
        cin >> user_choice;
        if (user_choice == 1) {
            cout << "You chose the " << Car1 << " For $" << Car1_Price << endl;
            return Car1_Price;
        }
        else if (user_choice == 2) {
            cout << "You chose the " << Car2 << " For $" << Car2_Price << endl;
            return Car2_Price;
        }
        else if (user_choice == 3) {
            cout << "You chose the " << Car3 << " For $" << Car3_Price << endl;
            return Car3_Price;
        }
        else if (cin.fail()) {
            cout << "Error! Please enter a valid input of 1, 2, or 3!" << endl;
            cin.clear();
            cin.ignore(1000000, '\n');
        }
    }
}


int main() {
    double cost = Car_Menu();
    int credit_score;
    while (true) {
        cout << "What is your credit score? " << endl;
        cin >> credit_score;
        if (cin.fail()) {
            cout << "Error! Please enter a valid integer credit score!" << endl;
            cin.clear();
            cin.ignore(100000, '\n');
        }
        else {
            break;
        }
    }


    
    double interest_rate;
    interest_rate = get_interest_rate(credit_score);
    cout << "Your interest rate is: " << interest_rate << "%" << endl;

    double down_payment;

    while (true) {
        cout << "What is your down payment going to be? " << endl;
        cin >> down_payment;
        if (cin.fail()) {
            cout << "Error! Please enter a valid down payment!" << endl;
            cin.clear();
            cin.ignore(100000, '\n');
        }
        else {
            break;
        }
    }
    int years;
    while (true) {
        cout << "How many years do you want to pay? " << endl;
        cin >> years;
        if (cin.fail()) {
            cout << "Error! Please enter a valid number of years!" << endl;
            cin.clear();
            cin.ignore(100000, '\n');
        }
        else {
            break;
        }
    }
    double total = total_payment(interest_rate, cost, down_payment, years);

    cout << total << " is your montly payment" << endl;


    return 0;
}