#pragma once
#include<iostream>
#include<string>
using namespace std;
namespace ILISI_bank
{
	class Devise
	{
	protected:
		string code;
		double amount;
	public:
		Devise(string, double);
		virtual Devise* ConvertTo(string code) = 0;
		string to_string()const;
		/*bool operator==(const Devise& c)const;
		bool operator<(const Devise d) const;*/
		Devise& operator-=(const Devise& d);
		Devise& operator+=(const Devise& d);
		bool operator<=(const Devise& d) const;
		bool operator<=(const double d) const;
		bool operator!=(const Devise& d) const;
		bool operator==(const Devise& d) const;
		Devise* operator*(const double d);
		Devise* operator/(const double d);

		//Devise* ILISI_Bank::Devise::operator/(double m)
		~Devise();
	};
}