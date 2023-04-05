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

int* copiertableau(int* tab, int deb, int fin){
  int* tabcop = malloc((fin-deb)*sizeof(int));
  for (int i=deb ; i<fin ; i++){
    tabcop[i-deb] = tab[i];
  }
  return tabcop;
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

void fusionner(int* tab, int monDebut, int monMilieu, int maFin){
  int i=0;
  int j=0;

  int* tab1 = copiertableau(tab,monDebut,monMilieu);
  int* tab2 = copiertableau(tab,monMilieu,maFin);

  int long1 = monMilieu - monDebut;
  int long2 = maFin - monMilieu;

  while (i<long1 && j<long2){
    if (tab1[i] <= tab2[j]){
      tab[monDebut+i+j] = tab1[i];
      i++;
    }else{
      tab[monDebut+i+j] = tab2[j];
      j++;
    }
  }

  while (i < long1){
    tab[monDebut+i+j] = tab1[i];
    i++;
  }

  while (j < long2){
    tab[monDebut+i+j] = tab2[j];
    j++;
  }
}