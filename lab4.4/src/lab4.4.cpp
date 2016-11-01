//============================================================================
// Name        : 4.cpp
// Author      : maria
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;


int main() {

	string firstName;
	string middleName;
	string lastName;
	char gender;
	cout << "Enter your personal info." << endl;

	cin >> firstName >> middleName >> lastName >> gender;
	if (gender == 'M'){
		cout << "Mr.";
	} else if (gender == 'F'){
		cout << "Mrs.";
	}

	cout << lastName << "," << " your initials are " << firstName.at(0) << middleName.at(0) << lastName.at(0);
















	return 0;
}
