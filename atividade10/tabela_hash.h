#ifndef TABELA_HASH_H
#define TABELA_HASH_H

#define MAX 100

char* hash_table[MAX];

void hash_table_put(char* chave, char* dado);
char* hash_table_get(char* chave);
int hash_table_contains(char* chave);
void hash_table_remove(char* chave);

#endif 
