// Andrew Powell 8/25/2024
// userGreeting.cpp
#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "What is your name?: " << endl;
    cin >> name;

    // This part made me so mad because it would not run at all... until I realized Clion put
    // an extra ; after name and before my message!
    cout << "Hello " << name << ",\n\n Welcome To My userGreeting Program!" << endl;

    return 0;
}
