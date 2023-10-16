#ifndef LISTA_H
#define LISTA_H
	
	typedef struct No{ 
	char valor ; 
	struct No* proximo;	
}No; 

No* lista_criar();
void lista_destruir(No* L );
int lista_verifica_existencia(No* L, char valor_busca);
int lista_verifica_ocorrencias(No* L, char valor_busca);
void lista_imprimir_inversa(No* L);
void lista_inserir_no(No* L, int i, char novo_valor);
void lista_remover_no(No* L, char valor_busca);


#endif