#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "Devise.h"
using namespace ILISI_bank;

class Dollar : public Devise
{
	static double TauxEuro;
	static double TauxMAD;
public:
	Dollar(double montant);
	Devise* ConvertTo(string code) override;
};