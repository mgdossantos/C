#include <stdio.h>
#include <stdlib.h>

//defini a estrutura
struct no{
	int matricula;
    double media;
	struct no *esq,*dir;
};

typedef struct no* arvBin;

arvBin* criaArvBin();

int insereArvBin(arvBin *raiz, int matricula, double media);
double consultaArvBinRecursivo(arvBin *raiz, int matricula);
int main(){
	arvBin* raiz;
	raiz=criaArvBin();
	int numeroElementos = 6;
	
    int i, matricula;
    double media,mediaPesquisada;
    for(i=0; i < numeroElementos; i++){
        printf("Digite a matricula do aluno: ");
        scanf("%d",&matricula);
        printf("Digite a media do aluno: ");
        scanf("%lf",&media);
        insereArvBin(raiz,matricula,media);
    }
    int pesquisar=0;
    while(pesquisar==1){
        printf("Digite a matricula que vc deseja pesquisar: ");
        scanf("%d",&matricula);
        mediaPesquisada=consultaArvBinRecursivo(raiz,matricula);
        printf("Media do aluno pesquisado: %lf\n",mediaPesquisada);
        printf("Deseja fazer uma nova pesquisa? Sim - 1 / Nao - 0");
        scanf("%d",&pesquisar);
    }
    return(0);
}


arvBin* criaArvBin(){
	arvBin* raiz = (arvBin*) malloc(sizeof(arvBin));
    if(raiz != NULL)
        *raiz = NULL;
    return raiz;
}

int insereArvBin(arvBin *raiz, int matricula, double media){
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
    novo->matricula = matricula;
    novo->media = media;

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
            if(matricula== atual->matricula){
                free(novo);
                return 0;//elemento já existe
            }
            //se for maior, vamos percorrer a arvore da direita

            if(matricula> atual->matricula)
                atual = atual->dir;
            //menor a arvore da esquerda
            else
                atual = atual->esq;
        }
        //isso tudo eh feito ate acharmos a um no folha
        //o anterior vai nos guiar se vamos adicionar o novo no a direita ou a esquerda
        if(matricula > ant->matricula)
            ant->dir = novo;
        else
            ant->esq = novo;
    }
    return 1;
}

double consultaArvBinRecursivo(arvBin *raiz, int matricula){
    if(raiz==NULL)
        return -1;
    
    if(*raiz!=NULL){
        if (matricula==(*raiz)->matricula)
            return (*raiz)->media;
        else{
            if(matricula<(*raiz)->matricula){
                consultaArvBinRecursivo(&((*raiz)->esq),matricula);
            }
            else{
                consultaArvBinRecursivo(&((*raiz)->dir),matricula);
            }    
        }
    }
}
