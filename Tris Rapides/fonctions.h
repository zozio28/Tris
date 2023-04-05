#ifndef __fonctions_H_
#define __fonctions_H_

int* allouer(int taille);
void initialiser(int* monTab, int taille);
void afficher(int* monTab,int taille);
void copie(int* tableauOriginal, int** tableauCopie, int tailleTableau);
void echange(int* monTab, int i, int j);
void remplisseur_tab_copies(int** tab_copies, int* tab, int taille, int nombre);
int partitionner(int* monTab, int pas, int taille);
int* copiertableau(int* tab, int deb, int fin);
void fusionner(int* tab, int monDebut, int monMilieu, int maFin);

#endif
