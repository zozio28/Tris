#include "fonctions.h"
#include <stdio.h>
#include <stdlib.h>

int* allouer(int taille){
  return malloc(taille*sizeof(int));
}

void initialiser(int* monTab, int taille){
  for (int i=0; i<taille;i++){
    monTab[i]=rand()%100;
  }
}

void afficher(int* monTab,int taille){
  for (int i=0; i<taille; i++){
    printf("| %d ", monTab[i]);
  }
  printf("| \n");
}

void copie(int* tableauOriginal, int** tableauCopie, int tailleTableau){
  *tableauCopie = allouer(tailleTableau);
  for (int i=0; i<tailleTableau; i++){
    (*tableauCopie)[i]=tableauOriginal[i];
  }
}

void echange(int* monTab, int i, int j){
  int ref;
  ref=monTab[j];
  monTab[j]=monTab[i];
  monTab[i]=ref;
}
