#include <iostream>
#include <string>
using namespace std;


double CreditScore(int score) {
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
}


int main() {
    double cost = Car_Menu();
    int credit_score;
    cout << "What is your credit score? " << endl;
    cin >> credit_score;
    double interest_rate;
    interest_rate = CreditScore(credit_score);
    cout << "Your interest rate is: " << interest_rate << "%" << endl;


    return 0;
}