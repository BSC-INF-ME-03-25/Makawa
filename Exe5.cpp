#include <iostream>

using namespace std;

void calculateTriangleArea(){
	double base, height;
	cout << "Enter the base of the triangle: ";
	cin >> base;
	cout << "Enter the height of the triangle: ";
	cin >> height;
	double area = 0.5 * base* height;
	cout << "The area of the triangle is: " << area << endl;
}

void calculateSquareArea(){
	double side;
	cout << "Enter the side length of the square: ";
	cin >> side;
	
	double area = side *side;
	cout << "The area of the square is: " << area << endl;
}

void calculateRectangleArea(){
	double length, width;
	cout << "Enter the length of the rectangle: ";
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	double area = length * width;
	cout << "The area of the rectangle is: " << area << endl;
}

int main(){
	int choice;
	while(true){
		cout << "\nSelect a shape to calculate its area:" << endl;
		cout << "1. Triangle" << endl;
		cout << "2. Rectangle" <<endl;
		cout << "3. Square" << endl;
		cout << "4. Quit" << endl;
		cout << "Enter your choice (1/2/3/4): ";                                                       
		
		switch (choice){
			case 1:
				calculateTriangleArea();
				break;                            
		    case 2:
				calculateSquareArea();
				break;
		    case 3:
				calculateRectangleArea();
				break;
		    case 4:
				cout << "Goodbye!" << endl;
				break;
				return 0;
		 default:
		   cout << "Invalid input. Please enter a valid choice (1/2/3/4)." << endl;						
		}
	}
	
	return 0;
}