#include "Transaction.h"
using namespace std;
ILISI_bank::Transaction::Transaction(string t, Devise* d, string dat) :type(t), amount(d), date(dat)
{}

void ILISI_bank::Transaction::print_transaction()
{
	cout << this->type << " " << this->amount->to_string() << " on: " << this->date << endl;
}

ILISI_bank::Transaction::~Transaction()
{
}