#include<stdio.h>
#include<stdlib.h>

struct noeud{
    int parent;
    struct noeud *droit;
    struct noeud *gauche;
}

typedef struct noeud Noeud;
typedef Noeud *NoeudPtr;

NoeudPtr create();


<<<<<<< HEAD
int main(){
	NoeudPtr racine = NULL;
	racine = create();
	printf("Par ordre prefixe: \n");
	prefixe(racine);
	printf("\n");
	printf("Par ordre postfixe: \n");
	postfixe(racine);
	printf("\n");
	printf("Par ordre affixe: \n");
	affixe(racine);
	printf("\n");
=======
int main{}

NoeudPtr create(){
    int x;
	NoeudPtr newPtr = malloc(sizeof(Noeud));
	
	printf("Entrer un nombre positif(-1 pour stopper la succession): ",x);
	scanf("%d", &x);
	if(x == -1){
		return 0;
	}
	else{
		newPtr->parent = x;
	    printf("Entrer la valeur du fils gauche de %d \n",x);
	    newPtr->gauche = create();
	    printf("Entrer la valeur du fils droit de %d \n", x);
	    newPtr->droit = create();
	    return newPtr;
	}

>>>>>>> 6cafe36acf0151f13419acc1c2de1f78694d64f2
}