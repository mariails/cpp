//============================================================================
// Name        : cpp4.cpp
// Author      : maria
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// Enter a tank size
	double tank;
	cin >> tank;
	//Enter fuel efficiency (km per liter)
	double fuel;
	cin >> fuel;
	//Enter price per liter
	double price;
	cin >> price;
	//Kilometers to travel
	double kilometers;
	kilometers = tank * fuel;
	cout <<"We can travel " << kilometers << " km. \n";
	//Price for kilometer
	double pricekm;
	pricekm = price * fuel;
	cout << "For every 100 km it will coast "<< pricekm << " lv";

	return 0;
}
