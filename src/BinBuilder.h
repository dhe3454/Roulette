/*
 * BinBuilder.h
 *
 *  Created on: Aug 13, 2015
 *      Author: Daniel
 */

#ifndef BINBUILDER_H_
#define BINBUILDER_H_

#include "Wheel.h"

class BinBuilder {
public:
	BinBuilder();
	BinBuilder(Wheel& wheel);
	virtual ~BinBuilder();

	void setColors(Wheel& wheel);

	void generateStraightBets(Wheel& wheel);
	void generateSplitBets(Wheel& wheel);
	void generateStreetBets(Wheel& wheel);
	void generateCornerBets(Wheel& wheel);
	void generateLineBets(Wheel& wheel);
	void generateDozenBets(Wheel& wheel);
	void generateColumnBets(Wheel& wheel);
	void generateEvenMoneyBets(Wheel& wheel);
};

#endif /* BINBUILDER_H_ */
