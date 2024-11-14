#include "HistoryTransaction.h"
using namespace ILISI_bank;
ILISI_bank::HistoryTransaction::HistoryTransaction() : capacity(2), transaction_count(0)
{
	this->history = new Transaction * [this->capacity];
	for (int i = 0; i < this->capacity; i++)
	{
		this->history[i] = nullptr;
	}
}

void ILISI_bank::HistoryTransaction::addtransaction(Transaction* T)
{
	if (this->transaction_count >= this->capacity)
	{
		resize();
	}
	this->history[this->transaction_count++] = T;
}

void ILISI_bank::HistoryTransaction::resize()
{
	this->capacity *= 2;
	Transaction** newtable = new Transaction * [this->capacity];
	for (int i = 0; i < this->transaction_count; i++)
	{
		newtable[i] = this->history[i];
	}
	for (int i = this->transaction_count; i < this->capacity; i++)
	{
		newtable[i] = nullptr;
	}
	delete[] this->history; // supprimer le table des pointeurs
	this->history = newtable;
}

void ILISI_bank::HistoryTransaction::print_allTransactions() const
{
	for (int i = 0; i < this->transaction_count; i++)
	{
		std::cout << "\nTransaction " << i + 1 << " : " << endl;
		this->history[i]->print_transaction();
	}
}

ILISI_bank::HistoryTransaction::~HistoryTransaction()
{
	for (int i = 0; i < this->transaction_count; i++)
	{
		delete this->history[i];
		this->history[i] = nullptr;
	}
	delete[] this->history;
	this->history = nullptr;
}