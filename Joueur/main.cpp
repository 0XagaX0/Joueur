#include <iostream>
#include"Joueur.h"
#include"Guerrier.h"
#include"Mage.h"

int main() {
	Joueur J1;
	Joueur J2(24, "Ibrahim", 10, 3000.9, 100);
	Guerrier G1;
	Mage M1;
	J1.print();
	J2.print();
	G1.print();
	M1.print();
	cout << J2;
	//Tout marche peeeete tout. J'ai gagner. XAGAX etais la 
	return 0;
}