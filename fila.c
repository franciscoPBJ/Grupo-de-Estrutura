#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fila.h"

Fila*criaFila(){
    Fila*f =(Fila*)malloc(sizeof(Fila));
    return f;
}

//inicializacao

void inicializaFila(Fila *f){
    f->inicio = 0;
    f->numeroElementos = 0;
}

void busca
//impressao da fila

void exibirFila(Fila *f){
    printf("\nordem de execucao na impressao\n");
    int i = f->inicio;
    int cont;
    	for(cont = 0 ; cont < f->numeroElementos; cont++){
    		if(f->vet[i].num == 1){
    		printf("Diretor\n");
    		printf("nome :%s\n",f->vet[i].nome);
    		i = (i+1) % TAM;
			}
		}
		
    printf("\n");
}
//inserir  funcionario a fila

int inserirFila(Fila *f,int n){
    if(f->numeroElementos >= TAM){
    return FALSE;
    }
    else{
    int posicao = (f->inicio + f->numeroElementos)%TAM;

    printf("informe o seu nome:");
    fflush(stdin);
    gets(f->vet[posicao].nome);
    //printf("informe sua ocupacao na empresa:");
    //fflush(stdin);
    //gets(f->vet[posicao].cargo);
    fflush(stdin);
    f->vet[posicao].num = n;

    f->numeroElementos++;
    printf("\nadicionado com sucesso!\n");
    return TRUE;
    }
}

//ixcluir elemento primeiro da fila
int excluirElemento(Fila *f){
    if(f->numeroElementos == 0){
    return FALSE;
    }
    else{
    int numero = f->inicio;
    strcpy(f->vet[numero].nome," ");
    //strcpy(f->vet[numero].cargo," ");
    f->vet[numero].num = 0;
    printf("\ncontato inicial excluido\n");
    f-> inicio =(f->inicio + 1)%TAM;
    f->numeroElementos--;
    return TRUE;
    }
}

//menu simples

void menu(Fila *f){
    int choice,n;
    printf("\n=====adicionar informacao=====\n\n");
    printf("[1]-Diretor");
    printf("\n[2]-Coordenador");
    printf("\n[3]-Funcionario\n");
    printf("\n===============================\n\n");

    printf("Escolha o numero:");
    scanf("%d",&choice);

    switch(choice){
    case 1:
        n = 1;
        inserirFila(f,n);
        break;
    case 2:
        n = 2;
        inserirFila(f,n);
        break;
    case 3:
        n = 3;
        inserirFila(f,n);
        break;
    default: printf("opcao invalida");
	}
}

//menu para impressao

/*void menuImpressao(Fila *f){
    int cont,n;
    printf("\n=====Imprimir=====\n\n");
    printf("[1]-Diretor");
    printf("\n[2]-Coordenador");
    printf("\n[3]-Funcionario");
    printf("\n[4]-Todas informacoes");
    printf("\n===============================\n\n");

    printf("Escolha o numero:");
    scanf("%d",&cont);

    switch(cont){
    case 1:
        n = 1;
        exibirFila(f,n);
        break;
    case 2:
        n = 2;
        exibirFila(f,n);
        break;
    case 3:
        n = 3;
        exibirFila(f,n);
        break;
    default: printf("opcao invalida");
	}
}*/


