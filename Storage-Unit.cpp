# Storage-Unit---Prototype

/** Marcellus Hogan - Storage Unit**/



#include <iostream>
#include <string>
#include <string.h>
#include "Storage-Header.h"

using namespace std;

string initialization() {

	string input;
	int count = 10;
	int count2;
	string unit1[10];

	cout << "Enter the word/sentence/item in which you would like to store" << endl;
	cin >> input;
	
	if (input <= unit1[count]) {

		unit1[10] = input;


	}
	else if (input > unit1[10]) {

		cout << "This item will not fit in the current storage unit. Would you like to increase the size of the storage unit?" << endl;
		cin >> input;

		if (input == "Yes" || input == "Y" || input == "yes" || input == "YES") {

			increase(count);
			count2 = count;
			

		}
