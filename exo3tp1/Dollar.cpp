#include "Dollar.h"
#include "MAD.h"
#include "Euro.h"
using namespace ILISI_bank;

double Dollar::TauxMAD = 9.90;
double Dollar::TauxEuro = 0.94;
Dollar::Dollar(double montant) :Devise("USD", montant)
{}


Devise* Dollar::ConvertTo(string code)
{
    Devise* c = nullptr;
    if (this->code == code)
        return this;
    else if (code == "MAD")
    {
        c = new MAD(this->amount * TauxMAD);
    }
    else if (code == "Euro")
    {
        c = new Euro(this->amount * TauxEuro);
    }
    return c;
}