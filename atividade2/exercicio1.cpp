#include <stdio.h>

int soma_array(int arrayNum[], int size) {
    
	int result = 0;
    
    for (int i = 0; i < size; i++) {
        
		result = result + arrayNum[i];
    }
    
    printf("Soma: %d", result);
    return result;
}


int main() {
	
    int array[] = {10, 5, 23, 7};
    int tamanho = sizeof(array) / sizeof(array[0]);

    soma_array(array, tamanho);

    return 0;
    
}
