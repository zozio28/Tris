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


void remplisseur_tab_copies(int** tab_copies, int* tab, int taille, int nombre) {
  for (int i = 0; i < nombre; i++) {
    copie(tab,&tab_copies[i],taille);
  }
}

int partitionner(int* monTab, int pas, int taille){
  int pivot=monTab[pas];
  int i=pas-1;
  int j=taille+1;
  while (i<j){
    do{
      j=j-1;
    }while(monTab[j]>pivot);
    do{
      i=i+1;
    }while(monTab[i]<pivot);
    if (i<j){
      echange(monTab,i,j);
    }
  }
  return j;
}
