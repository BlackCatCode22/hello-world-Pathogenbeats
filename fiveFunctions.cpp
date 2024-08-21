// Andrew Powell 8/21/2024
// fiveFunctions.cpp

#include <iostream>
using namespace std;

// These are my function declarations
// These are my function signatures
void sayHello (string, int);

int addTwoInts(int, int);

int doubleInt(int);

int main() {
    cout << "\n***** Welcome to my function practice program! *****\n";

    // "Call" or "Invoke" the sayHello() function.
    // Call the function named sayHello with two arguments.
    sayHello("Michael", 42);

    // Call or Invoke the function named addTwoInts
    int mySum = 0;
    mySum = addTwoInts(54,7);
    cout << "\n The Sum of the two ints is " << mySum << endl;

    cout << " \n ***** END OF PROGRAM ***** \n";
    return 0;
}

// Define a function that says hello.
// This is a function definition.

void sayHello (string name, int age) {
    cout << "\n Hello from function 'sayHello()'!" << endl;
    cout << "\n Hello " << name << " your age is " << age << endl;
}
// Define the new function named: addTwoInts.
int addTwoInts(int num1, int num2) {
    int theSum = 0;
    theSum = num1 + num2;
    return theSum;
}
int doubleInt(int = 0.0);
