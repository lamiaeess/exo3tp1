#pragma once
#include<iostream>
#include "Transaction.h"
using namespace std;
namespace ILISI_bank {
	class HistoryTransaction
	{
	private:
		Transaction** history;
		int capacity; //min capacity
		int transaction_count; //verifier pour savoir si on va resize ou non
	public:
		HistoryTransaction();
		void addtransaction(Transaction*);
		void resize();
		void print_allTransactions()const;
		~HistoryTransaction();

	};
}