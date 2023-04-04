#ifndef __fonctions_H_
#define __fonctions_H_

int* allouer(int taille);
void initialiser(int* monTab, int taille);
void afficher(int* monTab,int taille);
void copie(int* tableauOriginal, int** tableauCopie, int tailleTableau);
void echange(int* monTab, int i, int j);

#endif
