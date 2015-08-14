/*
 * Bet.h
 *
 *  Created on: Aug 14, 2015
 *      Author: Daniel
 */

#ifndef BET_H_
#define BET_H_

#include "Wheel.h"

class Bet {
	int amount;
	Outcome outcome;
public:
	Bet();
	Bet(int betAmount, Outcome betOutcome);
	virtual ~Bet();

	int getAmount(){
		return amount;
	}

	Outcome getOutcome(){
		return outcome;
	}

	int winAmount(){
		return outcome.getOdds() * amount;
	}


};

#endif /* BET_H_ */
