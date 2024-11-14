#include "Current_Account.h"

ILISI_bank::Current_Account::Current_Account(Customer* o, Devise* d, HistoryTransaction* h, string date) :
	Account(o, d, h, date)
{}

bool ILISI_bank::Current_Account::retrait(Devise* d, string date_retrait)
{
	if (*d <= *this->balance)
	{
		*(this->balance) -= *d;
		Transaction* T = new Transaction("retrait", d, date_retrait);
		this->history->addtransaction(T);
		return true;
	}
	cout << "Solde Insuffisant pour faire le retrait !!" << endl;
	return false;
}

bool ILISI_bank::Current_Account::transfert(Account& vers, Devise* d, string date_transfert)
{
	if (this->retrait(d, date_transfert))
	{
		return vers.depot(d, date_transfert);
	}
	return false;
}