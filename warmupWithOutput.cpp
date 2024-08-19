#include <iostream>
using namespace std;

int main() {
    cout << "\n\nHello, World!\n\n" << endl;

    // Create some variables
    int userAge = 0;
    double userAgeDouble = 0.0;
    char userAgeChar = 'x';


    cout << "\nPlease enter your age (as a whole number): ";
    cin >> userAge;

    cout << "\nPlease enter your age (as a decimal)";
    cin >> userAgeDouble;

    cout << "\nPlease enter your age (as a single character)";
    cin >> userAgeChar;

    cout << "\nYour age as an integer is: " << userAge;
    cout << "\nYour age as a Decimal is: " << userAgeDouble;
    cout << "\nYour age as a Letter is: " << userAgeChar;
    return 0;
}
