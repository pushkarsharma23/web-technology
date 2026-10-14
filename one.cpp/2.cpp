#include <iostream>
#include <cmath>
using namespace std;

class NegativeNumberException {
public:
    void displayMessage() {
        cout << "Error: Square root of a negative number cannot be calculated." << endl;
    }
};

int main() {
    double num;

    cout << "Enter a number: ";
    cin >> num;

    try {
        if (num < 0) {
            throw NegativeNumberException();
        }

        cout << "Square root = " << sqrt(num) << endl;
    }
    catch (NegativeNumberException &e) {
        e.displayMessage();
    }

    return 0;
}