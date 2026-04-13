#include <iostream>

using namespace std;

int main(){
	
	int x = 3;
	int y = x++; //increasing the value of x before assigning to y
	
	cout <<"x: " << x << endl; // x 4
	cout <<"y: " << y << endl; // y 3
	
	
	return 0;
}