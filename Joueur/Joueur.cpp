// Joueur.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Joueur.h"

Joueur::Joueur(int id, string nom, int niveau, double points, int vie) : id(id), nom(nom), niveau(niveau), points(points), vie(vie) {}

Joueur Joueur::operator+(Joueur J1) {
	Joueur J2;
	J2.niveau += J1.niveau;
	J2.points += J1.points;
	J2.vie += J1.vie;
	return J2;
}

Joueur Joueur::operator=(Joueur J1) {
	Joueur J2;
	J2.id = J1.id;
	J2.nom = J1.nom;
	J2.niveau = J1.niveau;
	J2.points = J1.points;
	J2.vie = J1.vie;
	return J2;
}
ostream& operator<<(ostream& os, const Joueur J1) {
		os << "====== Infos ======\n";
		os << "ID: " << J1.id << "\n";
		os << "Nom: " << J1.nom << "\n";
		os << "Niveau: " << J1.niveau << "\n";
		os << "Points: " << J1.points << "\n";
		os << "Vie: " << J1.vie << "\n";
		return os;
}

bool Joueur::operator==(Joueur J1) {
	Joueur J2;
	return (J1.id==J2.id);//Dans le cas ou on parle d'identification
}
bool Joueur::operator<(Joueur J1) {
	Joueur J2;
	return (J1.niveau < J2.niveau &&J1.points <J2.points&& J1.vie < J2.vie);
}
bool Joueur::operator>(Joueur J1) {
	Joueur J2;
	return (J1.niveau > J2.niveau && J1.points > J2.points && J1.vie > J2.vie);
}

int Joueur::getId() {
	return id;
}
string Joueur::getNom() {
	return nom;
}
int Joueur::getNiveau() {
	return niveau;
}
double Joueur::getPoints() {
	return points;
}
int Joueur::getVie() {
	return vie;
}

void Joueur::setId(int id) {
	this->id = id;
}
void Joueur::setNom(string nom) {
	this->nom = nom;
}
void Joueur::setNiveau(int niveau) {
	this->niveau = niveau;
}
void Joueur::setPoints(double points) {
	this->points=points;
}
void Joueur::setVie(int vie) {
	this->vie=vie;
}

void Joueur::read() {
	cout << "Entrer l'ID: ";
	cin >> this->id;
	cout << "Entrer le nom: ";
	cin >> this->nom; 
	cout << "Entrer le niveau: ";
	cin >> this->niveau; 
	cout << "Entrer les points: ";
	cin >> this->points; 
	cout << "Entrer la vie: ";
	cin >> this->vie;
}
void Joueur::print() {
	cout << "===Infos===\n";
	cout << "ID: "<< this->id<<"\n";
	cout << "Nom: " << this->nom << "\n";
	cout << "Niveau: " << this->niveau << "\n";
	cout << "Points: " << this->points << "\n";
	cout << "Vies: " << this->vie << "\n";
}
void Joueur::modifier() {
	int choix;
	cout << "Quelle information voulez vous modifier ?\n";
	cout << "1.Id\n";
	cout << "2.Nom\n";
	cout << "3.Niveau\n";
	cout << "4.Points\n";
	cout << "5.Vie\n";
	cin >> choix;
	//int id,niveau,vie; string nom; double points;

	switch (choix) {
	case 1:
		cout << "Entrer le nouvelle ID: \n";
		cin >> this->id;
		break;
	case 2:
		cout << "Entrer \n";
		cin >> this->nom;
		break;
	case 3:
		cout << "Entrer \n";
		cin >> this->niveau;
		break;
	case 4:
		cout << "Entrer \n";
		cin >> this->points;
		break;
	case 5:
		cout << "Entrer \n";
		cin >> this->vie;
		break;
	default:
		cout << "Option non prise en compte\n";
	}
}

void Joueur::ajouterVie(int points) {
	vie += points;
}
void Joueur::diminuerVie(int points) {
	if (points >= vie) {
		vie = 0;
	}
	else {
		vie -= points;
	}
}

void Joueur::augmenterNiveau() {
	niveau += 1;
}
void Joueur::ajouterPoints(double points) {
	this->points += points;
}








// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
