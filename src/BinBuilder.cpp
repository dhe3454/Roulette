/*
 * BinBuilder.cpp
 *
 *  Created on: Aug 13, 2015
 *      Author: Daniel
 */

#include "BinBuilder.h"

BinBuilder::BinBuilder() {
	// TODO Auto-generated constructor stub

}

BinBuilder::BinBuilder(Wheel& wheel) {
	// TODO Auto-generated constructor stub
	generateStraightBets(wheel);
	generateSplitBets(wheel);
}

BinBuilder::~BinBuilder() {
	// TODO Auto-generated destructor stub
}

std::string intToString(int i){
	std::stringstream ss;
	ss << i;
	std::string output = ss.str();

	return output;
}

void BinBuilder::generateStraightBets(Wheel& wheel){

	for(unsigned int i = 0; i < 38; ++i){

		if( i != 37)
			wheel.addOutcome(i, Outcome( intToString(i), 35));
		else
			wheel.addOutcome(i, Outcome( "00", 35));

	}

}

void BinBuilder::generateSplitBets(Wheel& wheel){

	std::string name;
	for(unsigned int i = 1; i < 37; i++){
		//If not third column
		if( i % 3 != 0  ){
			//Generate Bets for Col 1 and 2
			name = "Split " + intToString(i) + "-" + intToString(i+1);
			wheel.addOutcome(i, Outcome( name , 17));
			wheel.addOutcome(i+1, Outcome( name , 17));

			if( i < 34 ){
				name = "Split " + intToString(i) + "-" + intToString(i+3);
				wheel.addOutcome(i, Outcome(name, 17));
				wheel.addOutcome(i+3, Outcome(name, 17));
			}

		}
		else{ //If third column
			//Generate U-D Bets for Col 3
			if( i != 36){
				name = "Split " + intToString(i) + "-" + intToString(i+3);
				wheel.addOutcome(i, Outcome(name, 17));
				wheel.addOutcome(i+3, Outcome(name, 17));
			}

		}
	}
}
