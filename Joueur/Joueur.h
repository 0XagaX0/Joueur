#pragma once

#include <iostream>
using namespace std;

class Joueur {
	int id;
	string nom;
	int niveau;
	double points;
	int vie;

public:
	Joueur(int id = 0, string nom = "", int niveau = 0, double points = 0.0, int vie = 0);
	int getId();
	string getNom();
	int getNiveau();
	double getPoints();
	int getVie();

	Joueur operator+(Joueur J1);
	Joueur operator=(Joueur J1);
	friend ostream& operator<<(ostream& os,const Joueur J1);
	bool operator==(Joueur J1);
	bool operator<(Joueur J1);
	bool operator>(Joueur J1);


	void setId(int id);
	void setNom(string nom);
	void setNiveau(int niveau);
	void setPoints(double points);
	void setVie(int vie);

	void read();
	void print();
	void modifier();

	void ajouterVie(int points);
	void diminuerVie(int points);

	void augmenterNiveau();
	void ajouterPoints(double points);

};