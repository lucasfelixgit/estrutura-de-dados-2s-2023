#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"


int main(int argc, char* argv[]) {

    if (argc != 2) {
        printf("Uso incorreto. Use: %s arquivo_entrada.txt\n", argv[0]);
        return 1;
    }

    char* inputFile = argv[1];
    char* outputFile = "arq_palavras_ordenado.txt";

    FILE* input = fopen(inputFile, "r");
    FILE* output = fopen(outputFile, "w");

    if (input == NULL || output == NULL) {
        perror("Erro ao abrir");
        return 1;
    }

    char* palavras[50];  
    int cont = 0;
    char linha[50];

    while (fgets(linha, sizeof(linha), input)) {
        linha[strcspn(linha, "\n")] = '\0'; 
        palavras[cont] = strdup(linha);
        cont++;
    }

    bubbleSort(palavras, cont);

    for (int i = 0; i < cont; i++) {
        fprintf(output, "%s\n", palavras[i]);
        free(palavras[i]);
    }

    fclose(input);
    fclose(output);

    return 0;
}