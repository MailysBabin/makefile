#ifndef PERSONNE_H
#define PERSONNE_H
typedef struct Personne personne;
struct Personne{
int age;
char name[20];
};
void DisplayPersonne(personne p);
#endif
