#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//a estrutura
struct no{
	int ISBN;
	char titulo[20];
	char autor[30];
	float valor;
	int anoPublicao;
	struct no *esq,*dir;
};

typedef struct no* arvBin;



arvBin* criaArvBin();
int insereArvBin(arvBin *raiz, int ISBN,char titulo[20], char autor[30], float valor,int anoPublicao);
void emOrdemArvBin(arvBin *raiz);
void preOrdemArvBin(arvBin *raiz);
void posOrdemArvBin(arvBin *raiz);




int main(){
	arvBin* raiz;
	raiz=criaArvBin();

	int numeroElementos = 3;
	char titulo[20];
	char autor[30];
	float valor;
	int ano,ISBN;

    int i;
    for(i=0; i < numeroElementos; i++){

    	printf("Digite o ISBN: ");
    	scanf("%d",&ISBN);
    	printf("Digite o titulo: \n");
    	scanf(" %[^\n]s", titulo);
    	printf("Digite o autor: \n");
    	scanf(" %[^\n]s", autor);
    	printf("Digite o valor: \n");
    	scanf("%f",&valor);
   		printf("Digite o ano de publicacao: ");
    	scanf("%d",&ano);
    	insereArvBin(raiz,ISBN,titulo,autor,valor,ano);

    }
	return(0);
}


arvBin* criaArvBin(){
	arvBin* raiz = (arvBin*) malloc(sizeof(arvBin));
    if(raiz != NULL)
        *raiz = NULL;
    return raiz;
}

int insereArvBin(arvBin *raiz, int ISBN,char titulo[20],char autor[30],float valor, int ano){
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
    novo->ISBN =ISBN;
    novo->valor=valor;
    novo->anoPublicao=ano;
    strcpy(autor,novo->autor);
    strcpy(titulo,novo->titulo); 
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
            if(ISBN == atual->ISBN){
                free(novo);
                return 0;//elemento já existe
            }
            //se for maior, vamos percorrer a arvore da direita

            if(ISBN > atual->ISBN)
                atual = atual->dir;
            //menor a arvore da esquerda
            else
                atual = atual->esq;
        }
        //isso tudo eh feito ate acharmos a um no folha
        //o anterior vai nos guiar se vamos adicionar o novo no a direita ou a esquerda
        if(ISBN > ant->ISBN)
            ant->dir = novo;
        else
            ant->esq = novo;
    }
    return 1;
}



void emOrdemArvBin(arvBin *raiz){
    if(raiz == NULL)
        return;
    if(*raiz != NULL){
        emOrdemArvBin(&((*raiz)->esq));
        printf("*******************\n");
        printf("ISBN: %d\n",(*raiz)->ISBN);
      	printf("AUTOR: %s\n",(*raiz)->autor);
        printf("TITULO: %s\n",(*raiz)->titulo);
        printf("VALOR: R$%.2f\n",(*raiz)->valor);
        printf("ANO PUBLICACAO: %d\n",(*raiz)->anoPublicao);
        printf("*******************\n");
        emOrdemArvBin(&((*raiz)->dir));
    }
}

