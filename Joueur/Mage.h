#pragma once
#include <iostream>
#include"Joueur.h"

class Mage :public Joueur {
	int mana;
public:
	Mage(int id = 0, string nom = "", int niveau = 0, double points = 0.0, int vie = 0, int mana = 0);
	int getMana();
	void setMana(int m);

	void lancerSort();
};