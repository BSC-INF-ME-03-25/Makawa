#include <iostream>

using namespace std;
/*	void*/ swapNumbers(int &a, int &b){
		int temp = a;
	a = b;
	b = temp;
	}
	
int main(){
	
	int VarA = 25;
	int VarB = 100;

	
	cout <<"VarA before swap: " << VarA << endl;
	cout << "VarB before swap: " << VarB << endl;
	
	swapNumbers(VarA, VarB);
	
	cout << "VarA after swap: " << VarA << endl;
	cout << "VBarB after swap: " << VarB << endl;
	
	return 0;
	
} 