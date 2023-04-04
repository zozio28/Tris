#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fonctions.h"
#include "trisLents.h"

int main(){
  srand(time(NULL));
  int* ptab;
  int* ptabcopie;
  int taille = 10;
  ptab = allouer(taille);
  initialiser(ptab,taille);
  afficher(ptab,taille);
  copie(ptab,&ptabcopie,taille);
  triBulle(ptabcopie,taille);
  afficher(ptabcopie,taille);
  free(ptab);
  ptab=NULL;

  return 0;
}
