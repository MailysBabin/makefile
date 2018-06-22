#ifndef ASCENSEUR_H
#define ASCENSEUR_H

typedef struct Ascenseur ascenseur;
struct Ascenseur{
	int nbfloor;
	int nbPers;
	int Capacite;
	int EtageActuel;
	enum status={up, down, middle};
};

void DisplayAscenseur(ascenseur a);
#endif
