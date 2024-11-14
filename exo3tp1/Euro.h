#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "Devise.h"
using namespace ILISI_bank;
class Euro : public Devise
{
private:
	static double TauxUSD;
	static double TauxMAD;
public:
	Euro(double montant);
	Devise* ConvertTo(string code) override;
};