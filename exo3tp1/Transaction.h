#pragma once
#include<iostream>
using namespace std;
#include "Devise.h"
namespace ILISI_bank {
	class Transaction
	{
	private:
		string type;
		Devise* amount;
		string date;
	public:
		Transaction(string, Devise*, string);
		void print_transaction();
		~Transaction();
	};
}