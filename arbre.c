#include<stdio.h>
#include<stdlib.h>

struct noeud{
    int parent;
    struct noeud *droit;
    struct noeud *gauche;
}

typedef struct noeud Noeud;
typedef Noeud *NoeudPtr;



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
}