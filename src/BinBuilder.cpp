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
