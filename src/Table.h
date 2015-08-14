/*
 * Table.h
 *
 *  Created on: Aug 14, 2015
 *      Author: Daniel
 */

#ifndef TABLE_H_
#define TABLE_H_

#include "Bet.h"

class Table {
	int limit;
	std::vector<Bet> tableBets;
	int pot = 0;
public:
	Table();
	Table(int tableLimit, std::vector<Bet> betList);
	virtual ~Table();

	bool checkValidity( Bet bet ){

		if( limit <= pot + bet.getAmount()){
			return true;
		}
		else
			return false;
	}

	void placeBet(Bet bet){
		if( checkValidity(bet))
			tableBets.push_back(bet);
		else
			std::cout << "Invalid Bet" << std::endl;
	}

	int getLimit(){
		return limit;
	}

	std::vector<Bet> getBets(){
		return tableBets;
	}
};

#endif /* TABLE_H_ */
