//============================================================================
// Name        : 2.cpp
// Author      : maria
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double firstNum, secondNum, thirdNum;
	double bigestNum;

	cout << "Please enter three numbers. \n";
	cin >> firstNum;
	cin >> secondNum;
	cin >> thirdNum;

	if(firstNum > secondNum && firstNum > thirdNum){
		cout << "The largest number is " << firstNum << endl;
	}
	else if(firstNum < secondNum && secondNum > thirdNum){
		cout << "The largest number is " << secondNum << endl;
	}
	else if(firstNum < thirdNum && secondNum < thirdNum){
		cout << "The largest number is " <<thirdNum << endl;
	}



	return 0;
}
