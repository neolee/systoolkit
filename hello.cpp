#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    string name;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Hello " << name << "! You've picked " << n << "." << endl;
    return 0;
}
