/*
 * Outcome.cpp
 *
 *  Created on: Aug 5, 2015
 *      Author: Daniel
 */

#include "Outcome.h"
#include <string>

Outcome::Outcome() {
	// TODO Auto-generated constructor stub
	name = "";
	odds = 0;

}

Outcome::Outcome(std::string nameArgs, int oddsArgs) {

	name = nameArgs;
	odds = oddsArgs;

}

Outcome::~Outcome() {
	// TODO Auto-generated destructor stub
}

