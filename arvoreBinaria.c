#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

struct no{
	int info;
	struct no *esq,*dir;
};

arvBin* criaArvBin(){
	arvBin* raiz = (arvBin*) malloc(sizeof(arvBin));
    if(raiz != NULL)
        *raiz = NULL;
    return raiz;
}


void liberaNo(struct no* no){
	if(no==NULL){
		return;
	}
	liberaNo(no->esq);
	liberaNo(no->dir);
	free(no);
	no=NULL;

}
void liberaArvBin(arvBin* raiz){
	if(raiz==NULL){
		return;
	}
	liberaNo(*raiz);
	free(raiz);
}



int estaVaziaArvBin(arvBin *raiz){
	if(raiz==NULL)
		return 1;
	if(*raiz==NULL)
		return 1;
	return 0;
}

int alturaArvBin(arvBin *raiz){
	if(raiz==NULL)
		return 0;
	if(*raiz==NULL)
		return 0;
	int altEsq=alturaArvBin(&((*raiz)->esq));
	int altDir=alturaArvBin(&((*raiz)->dir));
	if(altEsq>altDir)
		return (altEsq+1);
	else
		return (altDir+1);

}

int totalNoArvBin(arvBin *raiz){
	if(raiz==NULL){
		return 0;
	}
	if(*raiz==NULL)	{
		return 0;
	}
	int altEsq=totalNoArvBin(&((*raiz)->esq));
	int altDir=totalNoArvBin(&((*raiz)->dir));
	return (altEsq+altDir+1);
}