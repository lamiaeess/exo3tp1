#include"Devise.h"
#include "Euro.h"
#include "Dollar.h"
#include "MAD.h"
using namespace ILISI_bank;
double Euro::TauxUSD = 1.1;
double Euro::TauxMAD = 10.67;
Euro::Euro(double montant) : Devise("Euro", montant)
{}

Devise* Euro::ConvertTo(string code)
{
    Devise* c = nullptr;
    if (this->code == code)
        return this;
    else if (code == "MAD")
    {
        c = new MAD(this->amount * TauxMAD);
    }
    else if (code == "USD")
    {
        c = new Dollar(this->amount * TauxUSD);
    }
    return c;
}