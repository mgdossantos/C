#include <stdio.h>
#include <stdlib.h>

//defini a estrutura
struct no{
	int info;
	struct no *esq,*dir;
};

typedef struct no* arvBin;

arvBin* criaArvBin();
void liberaArvBin(arvBin *raiz);
int insereArvBin(arvBin *raiz, int valor);
int alturaArvBin(arvBin *raiz);
void emOrdemArvBin(arvBin *raiz);
void preOrdemArvBin(arvBin *raiz);
void posOrdemArvBin(arvBin *raiz);




int main(){
	arvBin* raiz;
	raiz=criaArvBin();
	int numeroElementos = 6;
	
    int i,dado  ;
    for(i=0; i < numeroElementos; i++){
        printf("Digite a info do no: ");
        scanf("%d",&dado);
        insereArvBin(raiz,dado);
    }
    printf("Altura da Arvore: %d\n",alturaArvBin(raiz));
	//emOrdemArvBin(raiz);
    preOrdemArvBin(raiz);
    // posOrdemArvBin(raiz);
	
    return(0);
}


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
int insereArvBin(arvBin *raiz, int valor){
	// se ocorreu algum erro na criacao da arvore retorna 0, indicando erro
	 if(raiz == NULL)
        return 0;
    //cria um novo no
    struct no* novo;
    //aloca memoria de forma dinamica
    novo = (struct no*) malloc(sizeof(struct no));
    //se ocorreu algum erro na alocaao de memoria do novo no, retorna 0 indicando erro
    if(novo == NULL)
        return 0;
    //guarda a informacao no novo no e faz seus ponteiros apontarem para null
    novo->info = valor;
    novo->dir = NULL;
    novo->esq = NULL;

    //agora vamos encontrar onde vamos inserir o no
    //se o nosso no especial estiver apontando para NULL, significa q temos uma arvore vazia
    //o nosso unico no eh o no q acabou de ser criado
    if(*raiz == NULL)
        *raiz = novo;
    //caso contrario vamos avaliar onde vamos colocar o novo no
    else{
    	//para isso vamos usar um no auxiliar atual
        struct no* atual = *raiz;
        //e outro ant de anterior ao atual
        struct no* ant = NULL;
        //enquanto o atuall não for NULL, ou seja não for um nó-folha
        while(atual != NULL){
        	//anterior vai guardar o end d atual
            ant = atual;
            //se o valor q queremos inserir for igual a um existente na arvore,nao inserimos
            if(valor == atual->info){
                free(novo);
                return 0;//elemento já existe
            }
            //se for maior, vamos percorrer a arvore da direita

            if(valor > atual->info)
                atual = atual->dir;
            //menor a arvore da esquerda
            else
                atual = atual->esq;
        }
        //isso tudo eh feito ate acharmos a um no folha
        //o anterior vai nos guiar se vamos adicionar o novo no a direita ou a esquerda
        if(valor > ant->info)
            ant->dir = novo;
        else
            ant->esq = novo;
    }
    return 1;
}

int alturaArvBin(arvBin *raiz){
    if (raiz == NULL)
        return 0;
    if (*raiz == NULL)
        return 0;
    int altesq = alturaArvBin(&((*raiz)->esq));
    int altdir = alturaArvBin(&((*raiz)->dir));
    if (altesq > altdir)
        return (altesq + 1);
    else
        return(altdir + 1);
}


void emOrdemArvBin(arvBin *raiz){
    if(raiz == NULL)
        return;
    if(*raiz != NULL){
        emOrdemArvBin(&((*raiz)->esq));
        printf("%d\n",(*raiz)->info);
        emOrdemArvBin(&((*raiz)->dir));
    }
}


void preOrdemArvBin(arvBin *raiz){
    if(raiz == NULL)
        return;
    if(*raiz != NULL){
        printf("%d\n",(*raiz)->info);
        preOrdemArvBin(&((*raiz)->esq));
        preOrdemArvBin(&((*raiz)->dir));
    }
}

void posOrdemArvBin(arvBin *raiz){
    if(raiz == NULL)
        return;
    if(*raiz != NULL){
        posOrdemArvBin(&((*raiz)->esq));
        posOrdemArvBin(&((*raiz)->dir));
        printf("%d\n",(*raiz)->info);
    }
}
