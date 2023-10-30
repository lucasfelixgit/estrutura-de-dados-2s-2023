#include <stdio.h>
#include "tabela_hash.h"

int main() {
    char* chave = "Brasil";
    char* dado = "Brasilia";

    
    hash_table_put(chave, dado);

    if (hash_table_contains(chave)) {
        printf("Tabela contem a chave: %s\n", chave);
    }

    char* valor = hash_table_get(chave);
    printf("Valor associado a chave %s: %s\n", chave, valor);

    hash_table_remove(chave);

    return 0;
}
