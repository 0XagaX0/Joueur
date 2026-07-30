#pragma once
#include <iostream>
#include"Joueur.h"

class Guerrier :public Joueur {
	int force;
public:
	Guerrier(int id = 0, string nom = "", int niveau = 0, double points = 0.0, int vie = 0, int force = 0);

	int getForce();
	void setForce(int f);

	void attaque();
};