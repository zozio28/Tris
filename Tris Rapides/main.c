#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fonctions.h"
#include "trisLents.h"
#include "trisRapides.h"

int main(){

  //Variables
  int taille = 10;
  int nombre = 4;
  int* ptab = allouer(taille);
  int** ptabcopie = malloc(nombre*sizeof(int*));;
  char* nom[] = {
    "à Bulle",
    "par Selection",
    "par Insertion",
    "Rapide"
  };

  float temps_total;
  clock_t t1,t2;

  initialiser(ptab,taille);
  srand(time(NULL));
  remplisseur_tab_copies(ptabcopie, ptab, taille, nombre);

  printf("Tableau non trié : \n");
  afficher(ptab,taille);

  for (int i = 0; i < nombre; i++) {
    printf("\nTris %s : \n", nom[i]);
    afficher(ptabcopie[i],taille);
    t1=clock();
    switch (i) {
      case 0:
      triBulle(ptabcopie[i],taille);
      break;
      case 1:
      triSelection(ptabcopie[i],taille);
      break;
      case 2:
      triInsertion(ptabcopie[i],taille);
      break;
      case 3:
      triRapide(ptabcopie[i],0,taille);
      break;
    }
    t2=clock();
    temps_total= (float)(t2-t1)/CLOCKS_PER_SEC;
    afficher(ptabcopie[i],taille);
    printf("Temps total : %f de secondes à s'executer \n",temps_total);
  }

  free(ptab);
  free(ptabcopie);
  ptab=NULL;
  ptabcopie=NULL;
  return 0;
}
