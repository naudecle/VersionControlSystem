#include<stdio.h>
#include<stdlib.h>

struct noeud{
    int parent;
    struct noeud *droit;
    struct noeud *gauche;
}

typedef struct noeud Noeud;
typedef Noeud *NoeudPtr;



int main{}