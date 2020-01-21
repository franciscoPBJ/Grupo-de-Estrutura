//implementacao das funcoes e procedimentos

#define TAM 5
#define TRUE 1
#define FALSE 0

//estrutura registro para guardar informacoes dentro do vetor
typedef struct{
    //char cargo[20];
    char nome[20];
    int num;
}REGISTRO;

//estrutura fila que interliga o registro
typedef struct{
    REGISTRO vet[TAM];
    int inicio;
    int numeroElementos;
}Fila;

//criacao de um ponteiro

Fila*criaFila();

//procedimento para iniciar a fila

void inicializaFila(Fila *f);

//impressao da fila

void exibirFila(Fila *f);

//inserir  funcionario a fila

int inserirFila(Fila *f,int n);

//ixcluir elemento primeiro da fila

int excluirElemento(Fila *f);

//menu de selecao de cargo

void menu(Fila *f);

//menu de impressao

//void menuImpressao(Fila *f);
