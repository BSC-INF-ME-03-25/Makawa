#include <iostream>

using namespace std;

int main(){
	
	int number;
	
	cout << "Enter your value (>5 and <10): ";
	cin >> number;
	
	
	while (number > 5 && number < 10) {
	
	cout << "You Entered valid value:" << number << endl;
	
	cout << "Enter another value (>5 and <10): " << endl;
	cin >> number;
		
	}
	cout << "Sorry you have entered the wrong value. Please try again." << endl;
	
	cout << "Enter your value (>5 and <10): ";
	cin >> number;
	
	cout << "You Entered valid value:" << number << endl;
	
	return 0;
}