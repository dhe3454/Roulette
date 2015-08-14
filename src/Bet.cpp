/*
 * Bet.cpp
 *
 *  Created on: Aug 14, 2015
 *      Author: Daniel
 */

#include "Bet.h"

Bet::Bet() {
	// TODO Auto-generated constructor stub
	amount = 0;

}

Bet::Bet(int betAmount, Outcome betOutcome) {
	amount = betAmount;
	outcome = betOutcome;

}

Bet::~Bet() {
	// TODO Auto-generated destructor stub
}

