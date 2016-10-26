//============================================================================
// Name        : cpp3.cpp
// Author      : maria
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//Enter a price of something(lv)
	cout << " ";
	double price;
	cin >> price;
	//Enter amount(lv)
	cout << " ";
	double amount;
	cin >> amount;
	double change;
	change = amount - price;
	cout << change << " lv ";
	change = change * 100;
	cout <<"("<< change  << " st)";




	return 0;
}
