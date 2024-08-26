// Andrew Powell 8/25/2024
// sumTwoInts.cpp

#include <iostream>
// Still did not need cmath even though freecodecamp said to use it

using namespace std;

int main()
{
    int num1, num2;
    cout << "Let us add two numbers with C++: ";

    cout << "\n Enter First Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;


// For some reason this has been giving me so much trouble
// Ohhhh I had to do another cout after the quotes!
    cout << "The sum of your two numbers is: "; cout << num1 + num2 << endl; ;

    return 0;
}
