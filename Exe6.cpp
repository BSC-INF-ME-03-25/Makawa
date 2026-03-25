#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

string Reverse(string text){
	string reversed = "";
	for (int i =text.length() - 1; i >= 0; i--){
		reversed += text [i];
	}
	return reversed;
	
}

int countVowels(string text){
	int count = 0;
	for (char c : text){
		c = tolower(c);
		if (c =='a' || c == 'e' || c == 'i' || c == '0' || c == 'u'){
		count++;
				}
	}
	return count;
}

string captalizeSecondLetter(string text){
	stringstream ss(text);
	string word, result = "";
	
	while (ss>> word){
		if (word.length() > 1) {
			word[1] = toupper(word[1]);
		}
		result += word + "";
	}
	return result;
}

int main(){
	ifstream file("C:\\Users\\makaw\\This is the Advanced Computer Progr.txt");
		string fileData;
		
		getline(file,fileData);
		file.close();
		
		cout << "orignal Text: " << fileData << endl;
		
		cout << "number of vowels: " << countVowels(fileData) << endl;
		
		cout << "number of words: " << Reverse(fileData) << endl;
		
		cout << "Reversed Text: " <<Reverse(fileData) << endl;
		
		cout << "second letter captalize: "
		     << captalizeSecondLetter(fileData) <<endl;
		     
	return 0;
}