//============================================================================
// Name        : zadacha1.cpp
// Author      : maria
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main() {

	  int number;
	    cout << "Please, enter a number:" << endl;
	    cin >> number;
	    bool isNumber = false;

	    if(!cin.fail()){
	    	    	isNumber = true;
		}

	    int divider;
	    cout << "Please, enter a divider:" << endl;
	    cin >> divider;

	    bool isDivider = false;

	    if(!cin.fail()){
	    	isDivider = true;
	    }

	    if(isNumber && isDivider){
	    	if (number % divider == 0) {
	    		        cout << number << " is divisible by " << divider << ".";
	    		    }
	    		    else if (number % divider != 0) {

	    		        int reminder;
	    		        for (int i = 2; i < divider; i++) {
	    		            if (number % i == 0) {
	    		                reminder = i;
	    		               break;
	    		            }
	    		        }
	    		        cout << number << " is NOT divisible by " << divider << ", there is a remainder: " << reminder << ".";
	    		    }
	    }else {
			cout << "Enter correct values." << endl;
		}




	return 0;
}
