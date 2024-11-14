#pragma once
#include<iostream>
using namespace std;
namespace ILISI_bank
{
	class Customer
	{
	private:
		static int count;
		int id;
		string firstname;
		string lastname;
	public:
		Customer(string, string);
		void print_customer()const;
		~Customer();
	};
};