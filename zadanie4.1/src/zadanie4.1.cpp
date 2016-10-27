//============================================================================
// Name        : 1.cpp
// Author      : maria
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	double number1, number2;    //input values

	cout << "Please enter a two numbers." << endl;
	cin >> number1 >> number2;

	if (number1 > number2){
		cout << number1 << " > " << number2 << endl;
	} else if (number1 < number2){
		cout << number1 << " < " << number2 << endl;}
	else {
		cout << number1 << " = " << number2 << endl;
	}



	return 0;
}
