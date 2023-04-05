#include "trisRapides.h"
#include "fonctions.h"

void triRapide(int* monTab, int pas, int taille){
  int q;
  if (pas<taille){
    q=partitionner(monTab,pas,taille);
    triRapide(monTab,pas,q);
    triRapide(monTab,q+1,taille);
  }
}

void triFusion(int* monTab, int pas, int taille){ //pas = début ; taille = fin
  int milieu = pas + (taille-pas);
  if ((taille - pas) > 1){
    milieu = (pas+taille)/2;
    triFusion(monTab,pas,milieu);
    triFusion(monTab,milieu,taille);
    fusionner(monTab,pas,milieu,taille);
  }
}
