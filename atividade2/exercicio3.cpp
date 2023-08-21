#include <stdio.h>
#include <string.h>


	int busca_string(char *arrayStr[], int size, char *search) {
    	
    int i = 0;
    	
		for (i = 0; i < size; i++) {
        	
			if (strcmp(arrayStr[i], search) == 0){
            	printf("1");
            	return 1;
        }
    }
    
    printf("0");
    return 0;
    
   }

	int main() {
    
	char *array[] = {"ABC", "DEF", "GHI", "JKL"};
    int tamanho = sizeof(array) / sizeof(array[0]);
    
	char *buscaStr = "JKL";
    
    busca_string(array, tamanho, buscaStr);

    return 0;
    
   }
