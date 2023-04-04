#include "trisLents.h"
#include "fonctions.h"

void triBulle(int* tab,int taille){
  int ref;
  for (int j=0;j<taille;j++){
    for(int i=0; i<taille-1-j;i++){
      if (tab[i]>tab[i+1]) {
        ref=tab[i];
        tab[i]=tab[i+1];
        tab[i+1]=ref;
      }
    }
  }
}

void triSelection(int* monTab, int taille){
  int min;
  for (int i=0; i<taille-1; i++){
    min = i;
    for (int j=i; j<taille; j++){
      if (monTab[min]>monTab[j]){
        min = j;
      }
    }
    if (monTab[min]<monTab[i]){
      echange(monTab, min, i);
    }
  }
}

void triInsertion(int* monTab, int taille){
  for (int i=0; i<taille; i++){
    for (int j=1; j<taille; j++){
      if (monTab[j-1]>monTab[j]){
        echange(monTab, j-1, j);
      }
    }
  }
}
