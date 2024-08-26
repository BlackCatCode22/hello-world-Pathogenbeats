// Andrew Powell 8/25/2024
// doubleInt.cpp

#include <iostream>

// The video said I needed to use #include <cmath> but, I guess I did not.
using namespace std;

int main() {
// I had to do this a few times because it kept coming up to 0
// before I realized all I had to do was num1 * 2

    int num1;

    cout << "\nThis is my Double an int project! \nHopefully you didn't mean decimals!" << endl;
    cout << "Enter A Number: " << endl;
    cin >> num1;
    cout << "Your number is: " << num1 << "\nYour number doubled is: " << num1 * 2 << endl; ;
    return 0;
}
