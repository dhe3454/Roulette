/*
 * R.cpp
 *
 *  Created on: Aug 5, 2015
 *      Author: Daniel
 */
#include <iostream>
#include <string>
#include "BinBuilder.h"


using namespace std;

int main(){

	Wheel w;
	BinBuilder b(w);

	vector<Outcome> test;

	for(unsigned int i = 0; i < 38; ++i){
		test = w.getBin(i).getOutcomes();
		cout << "Bin #:" << i << endl;

		for(unsigned int j = 0; j < test.size(); j++){
			cout << "Outcome #:" << j+1 << " : " << test[j].getName() << " Odds:: " << test[j].getOdds() << endl;
		}
	}

	return 0;


}


