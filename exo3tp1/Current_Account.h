#pragma once
using namespace std;
#include "Account.h"
namespace ILISI_bank
{
	class Current_Account : public Account
	{
	public:
		Current_Account(Customer* o, Devise* d, HistoryTransaction* h, string date);
		bool retrait(Devise* d, string date_retrait) override;
		bool transfert(Account& vers, Devise* d, string date_transfert)override;
	};
};