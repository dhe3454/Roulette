/*
 * Table.cpp
 *
 *  Created on: Aug 14, 2015
 *      Author: Daniel
 */

#include "Table.h"

Table::Table() {
	// TODO Auto-generated constructor stub
	limit = 0;

}

Table::Table(int tableLimit, std::vector<Bet> betList){
	limit = tableLimit;
	tableBets = betList;

	for(unsigned int i = 0; i < tableBets.size(); i++){
		pot = pot + tableBets[i].getAmount();
	}

}

Table::~Table() {
	// TODO Auto-generated destructor stub
}

