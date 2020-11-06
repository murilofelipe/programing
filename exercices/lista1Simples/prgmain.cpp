/*
PROGRAMA QUE CRIA UMA LISTA DINAMICA ENCADEADA
AS OPERACOES REALIZADAS NA LISTA SAO:
- INSERCAO NO FIM DA LISTA
- REMOCAO DE UM ELEMENTO QUALQUER
- IMPRESSAO DA LISTA
*/
#include "lista.h"
#include <stdio.h>



/**/
int main()
{
    celula *lista = NULL;  /*lista sem cabeca vazia*/

    int num, op, i;

    do{

        printf("\n\n1 - Inserir numero no fim da lista");
        printf("\n2 - Inserir elemento x apos o i-esimo elemento(no) da lista");
        printf("\n3 - Remover da lista");
		printf("\n4 - Remover i-esimo elemento(no) da lista");
        printf("\n5 - Imprimir lista");
        printf("\n6 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &op);

        if(op == 1)
        {
            scanf("%d", &num);
            inserir_fim(num, lista);
        }
        else if(op == 2)
        {
            scanf("%d %d", &num, &i);
            inserir_aposI(num,i,lista);
        }
        else if(op == 3)
        {
            scanf("%d", &num);
            remover(num, lista);
        }
        else if(op == 4)
        {
            scanf("%d", &num);
            lista = remove_i(num, lista);
        }
        else if(op == 5)
        {
            imprimir(lista);

        }
    }while(op != 6);

    /*apagar toda a lista encadeada alocada dinamicamente*/
    desalocar(lista);


    //printf("Ponteiro apos desalocar a lista: %p\n", lista);

    return 0;
}
