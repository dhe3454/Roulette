/*
 * Bin.cpp
 *
 *  Created on: Aug 11, 2015
 *      Author: Daniel
 */

#include "Bin.h"



Bin::Bin() {
	// TODO Auto-generated constructor stub

}

Bin::Bin( std::vector<Outcome> outcomeList) {

	for(unsigned int i = 0; i < outcomeList.size(); i++){
		outcomes.push_back(outcomeList[i]);
	}
}

Bin::~Bin() {
	// TODO Auto-generated destructor stub
}

void Bin::printBin(){
	for(unsigned int i = 0; i < outcomes.size(); i++){
		std::cout << outcomes[i].getName() << " " << outcomes[i].getOdds() << std::endl;
	}
}
