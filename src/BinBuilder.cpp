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
	setColors(wheel);
	generateStraightBets(wheel);
	generateSplitBets(wheel);
	generateStreetBets(wheel);
	generateCornerBets(wheel);
	generateLineBets(wheel);
	generateDozenBets(wheel);
	generateColumnBets(wheel);
	generateEvenMoneyBets(wheel);
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

void BinBuilder::setColors(Wheel& wheel){

	for(unsigned int i = 1; i < 37; i++){
		if( i == 1 || i == 3 || i == 5 || i == 7 || i == 9 || i == 12 || i == 14 || i == 16 || i == 18 || i == 19 || i == 21 || i == 23 || i == 25 || i == 27 || i == 30 || i == 32 || i == 34 || i == 36 ){
			wheel.getBin(i).setColor("Red");
		}
		else{
			wheel.getBin(i).setColor("Black");
		}
	}

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

void BinBuilder::generateStreetBets(Wheel& wheel){
	std::string name;
	for(unsigned int i = 1; i < 37; i = i + 3){

		name = "Street " + intToString(i) + "-" + intToString(i+1) + "-" + intToString(i+2);
		wheel.addOutcome(i, Outcome(name, 11));
		wheel.addOutcome(i+1, Outcome(name, 11));
		wheel.addOutcome(i+2, Outcome(name, 11));

	}
}

void BinBuilder::generateCornerBets(Wheel& wheel){
	std::string name;
	//Corner bets for col 1
	for(unsigned int i = 1; i < 32; i = i + 3){

		name = "Corner " + intToString(i) + "-" + intToString(i+1) + "-" + intToString(i+3) + "-" + intToString(i+4);
		wheel.addOutcome(i, Outcome(name, 8));
		wheel.addOutcome(i+1, Outcome(name, 8));
		wheel.addOutcome(i+3, Outcome(name, 8));
		wheel.addOutcome(i+4, Outcome(name, 8));

	}

	//Corner bets for col 2
	for(unsigned int i = 2; i < 33; i = i + 3){

		name = "Corner " + intToString(i) + "-" + intToString(i+1) + "-" + intToString(i+3) + "-" + intToString(i+4);
		wheel.addOutcome(i, Outcome(name, 8));
		wheel.addOutcome(i+1, Outcome(name, 8));
		wheel.addOutcome(i+3, Outcome(name, 8));
		wheel.addOutcome(i+4, Outcome(name, 8));

	}

}

void BinBuilder::generateLineBets(Wheel& wheel){
	std::string name;
	for(unsigned int i = 1; i < 37; i = i + 6){

		name = "Line " + intToString(i) + "-" + intToString(i+1) + "-" + intToString(i+2) + "-" + intToString(i+3) + "-" + intToString(i+4) + "-" + intToString(i+5);
		wheel.addOutcome(i, Outcome(name, 5));
		wheel.addOutcome(i+1, Outcome(name, 5));
		wheel.addOutcome(i+2, Outcome(name, 5));
		wheel.addOutcome(i+3, Outcome(name, 5));
		wheel.addOutcome(i+4, Outcome(name, 5));
		wheel.addOutcome(i+5, Outcome(name, 5));

	}
}

void BinBuilder::generateDozenBets(Wheel& wheel){
	std::string name;
	int count = 1;
	for(unsigned int i = 1; i < 37; i = i + 12){

		name = "Dozen " + intToString(count);
		wheel.addOutcome(i, Outcome(name, 2));
		wheel.addOutcome(i+1, Outcome(name, 2));
		wheel.addOutcome(i+2, Outcome(name, 2));
		wheel.addOutcome(i+3, Outcome(name, 2));
		wheel.addOutcome(i+4, Outcome(name, 2));
		wheel.addOutcome(i+5, Outcome(name, 2));
		wheel.addOutcome(i+6, Outcome(name, 2));
		wheel.addOutcome(i+7, Outcome(name, 2));
		wheel.addOutcome(i+8, Outcome(name, 2));
		wheel.addOutcome(i+9, Outcome(name, 2));
		wheel.addOutcome(i+10, Outcome(name, 2));
		wheel.addOutcome(i+11, Outcome(name, 2));

		count++;

	}
}

void BinBuilder::generateColumnBets(Wheel& wheel){
	std::string name;
	int count = 1;
	for(unsigned int i = 1; i < 4; i = i + 1){

		name = "Column " + intToString(count);

		wheel.addOutcome(i, Outcome(name, 2));
		wheel.addOutcome(i+3, Outcome(name, 2));
		wheel.addOutcome(i+6, Outcome(name, 2));
		wheel.addOutcome(i+9, Outcome(name, 2));
		wheel.addOutcome(i+12, Outcome(name, 2));
		wheel.addOutcome(i+15, Outcome(name, 2));
		wheel.addOutcome(i+18, Outcome(name, 2));
		wheel.addOutcome(i+21, Outcome(name, 2));
		wheel.addOutcome(i+24, Outcome(name, 2));
		wheel.addOutcome(i+27, Outcome(name, 2));
		wheel.addOutcome(i+30, Outcome(name, 2));
		wheel.addOutcome(i+33, Outcome(name, 2));


		count++;

	}
}

void BinBuilder::generateEvenMoneyBets(Wheel& wheel){
	std::string name;

	for(unsigned int i = 1; i < 37; i++){

		//Generate Even/Odd Bets
		if(i % 2 == 0){
			name = "Even";
			wheel.addOutcome(i, Outcome(name, 1));
		}
		else{
			name = "Odd";
			wheel.addOutcome(i, Outcome(name, 1));
		}

		//Generate Red/Black Bets
		if( wheel.getBin(i).getColor() == "Red"){
			name = "Red";
			wheel.addOutcome(i, Outcome(name, 1));
		}
		else{
			name = "Black";
			wheel.addOutcome(i, Outcome(name, 1));
		}

		//Generate High/Low Bets
		if( i < 19){
			name = "Low";
			wheel.addOutcome(i, Outcome(name, 1));
		}
		else{
			name = "High";
			wheel.addOutcome(i, Outcome(name, 1));
		}


	}


}
