#include <iostream>
#include"Joueur.h"
#include"Guerrier.h"


Guerrier::Guerrier(int id, string nom, int niveau, double points, int vie, int force) :Joueur(id, nom, niveau, points, vie), force(force) {}

int Guerrier::getForce() {
	return force;
}
void Guerrier::setForce(int f) {
	force += f;
}
void Guerrier::attaque() {
	cout << getNom() << " lance une attaque de force " << force << "\n";
}