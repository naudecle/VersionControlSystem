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

}