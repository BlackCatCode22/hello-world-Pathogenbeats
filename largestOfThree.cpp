//
//Andrew Powell 8/19/2024
//largestOfThree.cpp
//

#include <iostream>
using namespace std;

int main() {
    cout << "\n\nWelcome to the Largest of Three Program" << endl;
    //Variables for this program!
    int firstNum = 0;
    int secondNum = 0;
    int thirdNum = 0;
    int largestNum = 0;

    // firstNum = 4
    // secondNum = 2
    // thirdNum = 8

    cout << "\nEnter First Number :" << endl;
    cin >> firstNum;
    cout << "\nEnter Second Number :" << endl;
    cin >> secondNum;
    cout << "\nEnter Third Number :"<< endl;
    cin >> thirdNum;

    if (firstNum > secondNum) {
        if (firstNum > thirdNum) {
            largestNum = firstNum;
        }
        else {
            largestNum = thirdNum;
        }
    }
    else {
        if (secondNum > firstNum) {
            if (secondNum > thirdNum) {}
            largestNum = secondNum;{
            }
        }
            cout << "\nThe Largest Number is: " << largestNum << endl;

            return 0;
    }
}