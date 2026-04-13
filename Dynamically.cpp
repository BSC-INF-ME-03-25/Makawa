#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. Dynamically allocate an integer
    int* num = new int;

    // 2. Dynamically allocate a string
    string* text = new string;

    // 3. User input
    cout << "Enter an integer: ";
    cin >> *num;   // store value in allocated memory

    cout << "Enter a string: ";
    cin >> *text;

    // 4. Output values
    cout << "\nYou entered:" << endl;
    cout << "Integer: " << *num << endl;
    cout << "String: " << *text << endl;

    // Free memory
    delete num;
    delete text;

    return 0;
}