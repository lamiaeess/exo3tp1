#pragma once
using namespace std;
#include "Devise.h"
#include "HistoryTransaction.h"
#include "Customer.h"
namespace ILISI_bank
{
	class Account
	{
	protected:
		static int compteur;
		int id;
		Customer* owner;
		Devise* balance;
		HistoryTransaction* history;
		string date_creation;
	public:
		Account(Customer* o, Devise* d, HistoryTransaction* h, string date);
		bool depot(Devise* d, string date_depot);
		virtual bool retrait(Devise* d, string date_retrait) = 0;
		virtual bool transfert(Account& vers, Devise* d, string date_transfert) = 0;
		void print_account()const;
		~Account();
	};
};