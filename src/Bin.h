/*
 * Bin.h
 *
 *  Created on: Aug 11, 2015
 *      Author: Daniel
 */

#ifndef BIN_H_
#define BIN_H_

#include <iostream>
#include <string>
#include <vector>
#include "Outcome.h"



class Bin {
	std::vector<Outcome> outcomes;
public:
	Bin();
	Bin( std::vector<Outcome> outcomeList);
	virtual ~Bin();

	std::vector<Outcome> getOutcomes(){
		return outcomes;
	}

	void addOutcome( Outcome addition ){
		outcomes.push_back(addition);
	}

	void printBin();


};


#endif /* BIN_H_ */
