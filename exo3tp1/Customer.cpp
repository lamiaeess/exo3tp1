#include "Customer.h"
int ILISI_bank::Customer::count = 0;

ILISI_bank::Customer::Customer(string fname, string lname) :id(++count), firstname(fname), lastname(lname)
{}

void ILISI_bank::Customer::print_customer() const
{
	cout << "\nid : " << this->id << endl;
	cout << "firstname : " << this->firstname << endl;
	cout << "lastname : " << this->lastname << endl;
}

ILISI_bank::Customer::~Customer()
{
}