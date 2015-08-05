/*
 * Outcome.h
 *
 *  Created on: Aug 5, 2015
 *      Author: Daniel
 */
#include <iostream>
#include <string>

#ifndef OUTCOME_H_
#define OUTCOME_H_

class Outcome {

	std::string outcome;
	int paidOdds;
public:
	Outcome();
	virtual ~Outcome();

	std::string getOutcome() { return outcome; }
	int getPaidOdds() { return paidOdds; }
};

#endif /* OUTCOME_H_ */
