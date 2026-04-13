#include <iostream>

using namespace std;

int main(){
	
	int numbersArray[5];
	
	int * pPointer = nullptr;
	
	pPointer = numbersArray;
	*pPointer = 10; // assigning a value
	pPointer++;
	
	*pPointer = 20; //second element value
	
	pPointer = &numbersArray[2];
	
	*pPointer = 30; // third element
	
	pPointer = &numbersArray [3];
	
	*pPointer = 40; //fourth element
	
	pPointer = numbersArray;
	
	*(pPointer+4) = 50; // the fifth element assigned
	
	for (int n = 0; n < 5; n++)
	{ cout << numbersArray[n] << ",";
	}
	
	return 0;
}