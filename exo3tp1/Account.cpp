#include "Account.h";
#include <assert.h>
int ILISI_bank::Account::compteur = 0;

ILISI_bank::Account::Account(Customer* o, Devise* d, HistoryTransaction* h, string date) :
	owner(o), balance(d), history(h), date_creation(date), id(++compteur)
{}

bool ILISI_bank::Account::depot(Devise* d, string date_depot)
{
	if (*d == *this->balance)
	{
		*(this->balance) += *d;
		Transaction* T = new Transaction("depot", d, date_depot);
		this->history->addtransaction(T);
		return true;
	}
	return false;
}

void ILISI_bank::Account::print_account() const
{
	cout << "\n------Informations sur Compte : " << endl;
	cout << "Owner : "; this->owner->print_customer();
	cout << "Balance : "; cout << this->balance->to_string() << endl;
	cout << "Tous les transactions : "; this->history->print_allTransactions();
	cout << "Date de Creation : " << this->date_creation << endl;
}

ILISI_bank::Account::~Account()
{}