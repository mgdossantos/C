#include <stdio.h>
#include <stdlib.h>

//defini a estrutura
struct no{
	int info;
    int alt; // guardar a altura do no
	struct no *esq,*dir;
};

typedef struct no* arvAVL;

arvAVL* criaArvAVL();
void liberaArvAVL(arvAVL *raiz);
int inserearvAVL(arvAVL *raiz, int valor);
int alturaArvAVL(arvAVL *raiz);
void emOrdemarvAVL(arvAVL *raiz);
void preOrdemarvAVL(arvAVL *raiz);
void posOrdemarvAVL(arvAVL *raiz);

int altNo(struct no* no);
int fatorBalanceamentoNo(struct no* no);
int maior(int x, int y);




int main(){
	arvAVL* raiz;
	raiz=criaArvAVL();
	int numeroElementos = 6;
	
    int i,dado  ;
    for(i=0; i < numeroElementos; i++){
        printf("Digite a info do no: ");
        scanf("%d",&dado);
        inserearvAVL(raiz,dado);
    }
    printf("Altura da Arvore: %d\n",alturaArvAVL(raiz));
	//emOrdemarvAVL(raiz);
    preOrdemarvAVL(raiz);
    // posOrdemarvAVL(raiz);
	
    return(0);
}


arvAVL* criaArvAVL(){
	arvAVL* raiz = (arvAVL*) malloc(sizeof(arvAVL));
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
void liberaArvAVL(arvAVL* raiz){
	if(raiz==NULL){
		return;
	}
	liberaNo(*raiz);
	free(raiz);
}
int inserearvAVL(arvAVL *raiz, int valor){
	// se ocorreu algum erro na criacao da arvore retorna 0, indicando erro
	 if(raiz == NULL)
        return 0;
    //cria um novo no
    struct no* novo;
    //aloca memoria de forma dinamica
    novo = (struct no*) malloc(sizeof(struct no));
    //se ocorreu algum erro na alocaAo de memoria do novo no, retorna 0 indicando erro
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

int alturaArvAVL(arvAVL *raiz){
    if (raiz == NULL)
        return 0;
    if (*raiz == NULL)
        return 0;
    int altesq = alturaArvAVL(&((*raiz)->esq));
    int altdir = alturaArvAVL(&((*raiz)->dir));
    if (altesq > altdir)
        return (altesq + 1);
    else
        return(altdir + 1);
}

void emOrdemarvAVL(arvAVL *raiz){
    if(raiz == NULL)
        return;
    if(*raiz != NULL){
        emOrdemarvAVL(&((*raiz)->esq));
        printf("%d\n",(*raiz)->info);
        emOrdemarvAVL(&((*raiz)->dir));
    }
}


void preOrdemarvAVL(arvAVL *raiz){
    if(raiz == NULL)
        return;
    if(*raiz != NULL){
        printf("%d\n",(*raiz)->info);
        preOrdemarvAVL(&((*raiz)->esq));
        preOrdemarvAVL(&((*raiz)->dir));
    }
}

void posOrdemarvAVL(arvAVL *raiz){
    if(raiz == NULL)
        return;
    if(*raiz != NULL){
        posOrdemarvAVL(&((*raiz)->esq));
        posOrdemarvAVL(&((*raiz)->dir));
        printf("%d\n",(*raiz)->info);
    }
}

//implementacoes que diferenciam avl de binaria

int altNo(struct no* no){
    if(no==NULL)
        return -1;
    else
        return no->alt;
}

int fatorBalanceamentoNo(struct no* no){
    //labs retorna valor absoluto
    return labs(altNo(no->esq)-altNo(no->dir));
}

int maior(int x, int y){
    if(x>y)
        return x;
    else
        return y;
}

void rotacaoSimplesDireita(arvAVL *raiz){
    //no auxiliar
    struct no *no;
    //rotacao
    no=(*raiz)->esq;
    (*raiz)->esq=no->dir;
    no->dir=*raiz;

    //calculo nas novas alturas
    (*raiz)->alt=maior(altNo((*raiz)->esq),altNo((*raiz)->dir))+1;
    no->alt=maior(altNo(no->esq),(*raiz)->alt)+1;
    *raiz=no;
}


void rotacaoSimplesEsquerda(arvAVL *raiz){
    //no auxiliar
    struct no *no;
    //rotacao
    no=(*raiz)->dir;
    (*raiz)->dir=no->esq;
    no->esq=*raiz;

    //calculo nas novas alturas
    (*raiz)->alt=maior(altNo((*raiz)->esq),altNo((*raiz)->dir))+1;
    no->alt=maior(altNo(no->esq),(*raiz)->alt)+1;
    *raiz=no;
}

void rotacaoDuplaDireita(arv AVL *raiz){
    rotacaoSimplesEsquerda(&(*raiz)->esq);
    rotacaoDuplaDireita(raiz);

}

void rotacaoDuplaEsquerda(arv AVL *raiz){
    rotacaoSimplesDireita(&(*raiz)->dir);
    rotacaoDuplaEsquerda(raiz);

    
}