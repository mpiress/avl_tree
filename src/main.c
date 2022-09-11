#include "avl.h"

int main(){
	int reg[] = {10,2,7,5,3,9,16,4,11,1,6,23,14};
	Tree *raiz = CreateTree();
	Record r;

	for(int i=0; i<13; i++){
		r.key = reg[i];
		r.value = 1;
		insertTree(&raiz, r);
	}

	preordem(raiz);
	printf("\n");

	r.key = 10;
	removeTree(&raiz, &raiz, r);
	
	r.key = 5;
	removeTree(&raiz, &raiz, r);
	
	r.key = 4;
	removeTree(&raiz, &raiz, r);
	
	r.key = 11;
	removeTree(&raiz, &raiz, r);
	
	r.key = 6;
	removeTree(&raiz, &raiz, r);

	preordem(raiz);
	printf("\n");

	
	
	return 0;
}