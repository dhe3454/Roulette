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
	std::string color = "green";
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

	void setColor( std::string newColor ){
		color = newColor;
	}

	std::string getColor(){
		return color;
	}

	void printBin();


};


#endif /* BIN_H_ */
