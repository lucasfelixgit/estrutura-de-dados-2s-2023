#include <stdio.h>
#include  "lista1.h"
#include "lista.c"

int main() {
    No* lista = lista_criar();

  	lista_inserir_no_i(lista, 0, 'A');
    lista_inserir_no_i(lista, 1, 'B');
    lista_inserir_no_i(lista, 2, 'C');
    lista_inserir_no_i(lista, 3, 'D');
    lista_inserir_no_i(lista, 4, 'E');
    lista_inserir_no_i(lista, 5, 'A');
   

    char busca = 'A';
    int existe = lista_verifica_existencia(lista, busca);
    if (existe) {
        printf("1\n", busca);
    } else {
        printf("0\n", busca);
    }

    char busca2 = 'B';
    int ocorrencias = lista_verifica_ocorrencias(lista, busca2);
    printf("%d Ocorrencias\n", busca2, ocorrencias);

    printf("Lista Inversa: ");
    lista_imprimir_inversa(lista);
    printf("\n");

    char caractere_removido = 'C';
    lista_remover_no(lista, caractere_removido);

    printf("Remocao %c", caractere_removido);
    No* atual = lista->proximo;
    while (atual != NULL) {
        printf("%c ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");

    lista_destruir(lista);

    return 0;
}