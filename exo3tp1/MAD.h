#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "Devise.h"
using namespace ILISI_bank;

class MAD : public	Devise
{
private:
	static double TauxEuro;
	static double TauxUSD;
public:
	MAD(double montant);
	Devise* ConvertTo(string code) override;
};