#ifndef AVL_H 
#define AVL_H

#include<stdio.h>
#include<stdlib.h>

typedef struct Record Record;
typedef struct Tree Tree;

struct Record{
	int key;
	int value;
};

struct Tree{
	Record reg;
	Tree *left, *right;
	int weight;
};

Tree* CreateTree();
void insertTree(Tree **t, Record r);
void pesquisa(Tree **t, Tree **aux, Record r);
int isInTree(Tree *t, Record r);

//muda o remove devido a necessidade de ponteiro para sub-árvore desbalanceada
void removeTree(Tree **t, Tree **f, Record r);
void antecessor(Tree **t, Tree *aux);
void rebalanceTree(Tree **t);

void preordem(Tree *t);
void central(Tree *t);
void posordem(Tree *t);


int getWeight(Tree **t);
int getMaxWeight(int left, int right);


void rotacaoSimplesDireita(Tree **t);
void rotacaoSimplesEsquerda(Tree **t);
void rotacaoDuplaDireita(Tree **t);
void rotacaoDuplaEsquerda(Tree **t);


#endif
