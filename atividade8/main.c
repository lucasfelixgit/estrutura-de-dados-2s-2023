#include <stdio.h>
#include  "lista1.h"
#include "lista.c"

int main() {
    No* lista = lista_criar();

  	lista_inserir_no(lista, 0, 'A');
    lista_inserir_no(lista, 1, 'B');
    lista_inserir_no(lista, 2, 'C');
    lista_inserir_no(lista, 3, 'D');
    lista_inserir_no(lista, 4, 'E');
    lista_inserir_no(lista, 5, 'A');
   

    char busca = 'A';
    int existe = lista_verifica_existencia(lista, busca);
    if (existe) {
        printf("O caractere '%c' existe na lista.\n", busca);
    } else {
        printf("O caractere '%c' nao existe na lista.\n", busca);
    }

    char busca2 = 'B';
    int ocorrencias = lista_verifica_ocorrencias(lista, busca2);
    printf("O caractere '%c' aparece %d vezes na lista.\n", busca2, ocorrencias);

    printf("Lista na Ordem Inversa: ");
    lista_imprimir_inversa(lista);
    printf("\n");

    char caractere_removido = 'D';
    lista_remover_no(lista, caractere_removido);

    printf("Lista apos a remocao: ", caractere_removido);
    No* atual = lista->proximo;
    while (atual != NULL) {
        printf("%c ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");

    lista_destruir(lista);

    return 0;
}