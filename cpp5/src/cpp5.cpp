//============================================================================
// Name        : cpp5.cpp
// Author      : maria
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char dir;
	cout << "Enter drive a letter" << endl;
	cin >> dir;
	string folder;
	cout << "Enter path" << endl;
	cin >> folder;
	string fileName;
	cout << "Enter file name" << endl;
	cin >> fileName;
    cout << dir << "\:\\" << folder << "\\" << fileName;


	return 0;

}
