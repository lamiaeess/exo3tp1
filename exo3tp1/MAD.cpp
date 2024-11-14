#include "MAD.h"
#include "Euro.h"
#include "Dollar.h"
double MAD::TauxUSD = 9.90;
double MAD::TauxEuro = 10.67;

MAD::MAD(double montant) : Devise("MAD", montant)
{}

Devise* MAD::ConvertTo(string code)
{
    Devise* c = nullptr;
    if (this->code == code)
    {
        return this;
    }
    else if (this->code == "Euro")
    {
        c = new Euro(this->amount / TauxEuro);
    }
    else if (this->code == "USD")
    {
        c = new Dollar(this->amount / TauxUSD);
    }
    return c;
}