#include "Devise.h"
using namespace ILISI_bank;
ILISI_bank::Devise::Devise(string c, double somme) : code(c), amount(somme)
{}

string ILISI_bank::Devise::to_string() const
{
	return "\n" + std::to_string(this->amount) + " " + this->code;
}

Devise& ILISI_bank::Devise::operator-=(const Devise& d)
{
	this->amount -= d.amount;
	return *this;
}

Devise& ILISI_bank::Devise::operator+=(const Devise& d)
{
	this->amount += d.amount;
	return *this;

}

bool ILISI_bank::Devise::operator<=(const Devise& d) const
{
	return this->amount <= d.amount;
}

bool ILISI_bank::Devise::operator<=(const double d) const
{
	return this->amount <= d;
}

bool ILISI_bank::Devise::operator!=(const Devise& d) const
{
	return this->code != this->code;
}

bool ILISI_bank::Devise::operator==(const Devise& d) const
{
	return this->code == this->code;
}

Devise* ILISI_bank::Devise::operator*(const double d)
{
	this->amount = this->amount * d;
	return this;
}

Devise* ILISI_bank::Devise::operator/(const double d)
{
	if (d != 0)
	{
		this->amount = this->amount / d;
	}
	return this;
}

ILISI_bank::Devise::~Devise()
{}