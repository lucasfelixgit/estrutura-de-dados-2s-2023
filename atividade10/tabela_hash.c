#include <string.h>
#include "tabela_hash.h"

int hash(char *chave) {
    int h = 0;

    for (; *chave; chave++) {
        h = h * 101 + (int)*chave;
    }
    return h % MAX;
}

void hash_table_put(char* chave, char* dado) {
    int i = hash(chave);
    hash_table[i] = dado;
}

char* hash_table_get(char* chave) {
    int i = hash(chave);
    return hash_table[i];
}

int hash_table_contains(char* chave) {
    int i = hash(chave);
    return (hash_table[i] != NULL);
}

void hash_table_remove(char* chave) {
    int i = hash(chave);
    hash_table[i] = NULL;
}
