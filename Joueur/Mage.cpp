#include <iostream>
#include"Joueur.h"
#include"Mage.h"


Mage::Mage(int id, string nom, int niveau, double points, int vie, int mana) :Joueur(id, nom, niveau, points, vie), mana(mana) {}

int Mage::getMana() {
	return mana;
}
void Mage::setMana(int m) {
	mana += m;
}

void Mage::lancerSort() {
	cout << getNom() << " lance un sort de mana " << mana<<"\n";
}