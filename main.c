#include <stdio.h>
#include <stdlib.h>
#include "fila.h"


int main(void) {
	
	Fila *f = criaFila();
	inicializaFila(f);
	int opc;
	
	do{

        printf("\n====menu de selecao====\n\n");
        printf("[1]->Adicionar:");
        printf("\n[2]->Remover Elemento da Fila");
        printf("\n[3]->Impressao");
        printf("\n[4]->sair");

        printf("\n\n======================\n\n");

        printf("informe a opcao desejada:");
        scanf("%d",&opc);

        switch(opc){

        case 1 :
            menu(f);
            break;
        case 2 :
            excluirElemento(f);
            break;
        case 3 :
            exibirFila(f);
            break;
        default: printf("valor invalido");
		}
    }while(opc != 4);
	
	return 0;
}
