//============================================================================
// Name        : cpp2.cpp
// Author      : maria
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;
int main()
{

	cout << "Enter a number in meters" << endl;
    double input;
    double kilometres;

    cin >> input;
    kilometres = input / 1000;
    cout << input << " m = " <<  kilometres << " km \n";
    int decimeters;
    decimeters = input * 10;
    cout << input << " m = " << decimeters << " dm \n";
    int centimeters;
    centimeters = input * 100;
    cout << input << " m = " << centimeters << " cm \n";

	return 0;
}
