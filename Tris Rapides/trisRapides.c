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

void fusionner(int** tab, int monDebut, int monMilieu, int maFin){
  int i=0;
  int max;
  int gauche;
  int droite;
  int* tabTemp;
  max = maFin - monDebut;
  gauche = monDebut;
  droite = monMilieu+1;
  allouer(*tabTemp);
}

void triFusion(int* monTab, int pas, int taille){
  int milieu;
  if (pas < taille){
    milieu = (pas+taille)/2;
    triFusion(monTab,pas,milieu);
    triFusion(monTab,milieu+1,taille);
    fusionner(monTab,pas,milieu,taille);
  }
}
