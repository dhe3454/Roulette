/*
 * R.cpp
 *
 *  Created on: Aug 5, 2015
 *      Author: Daniel
 */
#include <iostream>
#include <string>
#include "Bin.h"


using namespace std;

int main(){
	Outcome test = Outcome("Test Outcome", 5);
	Outcome test2 = Outcome("Test Outcome", 3);
	Outcome test3 = Outcome("Balloons", 3);

	vector<Outcome> testList;
	testList.push_back(test);
	testList.push_back(test2);
	testList.push_back(test3);

	Outcome test4 = Outcome("Final", 50);

	Bin testBin = Bin(testList);

	testBin.printBin();
	testBin.addOutcome(test4);
	cout << endl;
	testBin.printBin();
	return 0;


}


