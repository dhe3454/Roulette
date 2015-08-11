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

	std::string name;
	int odds;
public:
	Outcome();
	Outcome(std::string nameArgs, int oddsArgs);
	virtual ~Outcome();

	std::string getName() { return name; }
	int getOdds() { return odds; }

	int winAmount(int amount){
		return odds * amount;
	}

	bool isEqual(Outcome rhs){
		if(this->name == rhs.name)
			return true;
		else
			return false;
	}

};



#endif /* OUTCOME_H_ */
