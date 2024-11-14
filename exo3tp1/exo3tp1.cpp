#include <iostream>
using namespace std;
#include "Account.h"
#include "Customer.h"
#include "Devise.h"
#include "MAD.h"
#include "Euro.h"
#include "Dollar.h"
#include "HistoryTransaction.h"
#include "Current_Account.h"
#include "Save_Account.h"
using namespace ILISI_bank;
int main()
{
    Customer* c1 = new Customer("c1", "c1");
    Customer* c2 = new Customer("c2", "c2");
    c1->print_customer();
    c2->print_customer();

    Devise* d1 = new MAD(1000);
    Devise* d2 = new Euro(200);
    Devise* d3 = new MAD(1000);

    HistoryTransaction* h1 = new HistoryTransaction();
    string date1 = "29102024";
    Save_Account* s1 = new Save_Account(c1, d1, h1, date1);

}