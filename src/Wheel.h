/*
 * Wheel.h
 *
 *  Created on: Aug 11, 2015
 *      Author: Daniel
 */

#ifndef WHEEL_H_
#define WHEEL_H_

#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include "Bin.h"

class Wheel {
	std::vector<Bin> bins = std::vector<Bin>(38);
public:
	Wheel();
	virtual ~Wheel();

	Bin& getBin(int choice){
		return bins[choice];

	}

	void setBin(int binNum, Bin bin){
		if( binNum <= 37)
			bins[binNum] = bin;
	}

	void addOutcome(int binChoice, Outcome addition){
		if(binChoice > 38){
			return;
		}
		else{
			bins[binChoice].addOutcome(addition);
		}
	}

	Bin spin(){

		return bins[rand() % 38];
	}


};

#endif /* WHEEL_H_ */
