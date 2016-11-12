//============================================================================
// Name        : comparenumbers.cpp
// Author      : maria
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int num1, num2, num3;
	cout << "Please, enter three numbers:";
	cin >> num1 >> num2 >> num3;

	int minValue;
	if(num1 < num2 && num1 < num3){
		minValue = num1;
	}else if(num1 > num2 && num2 < num3){
		minValue = num2;
	}else if(num2 > num3 && num1 > num3){
		minValue = num3;
	}
	cout << "The smallest number is " << minValue;


	return 0;
}
