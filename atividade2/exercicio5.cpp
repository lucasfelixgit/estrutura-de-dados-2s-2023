#include <stdio.h>
#include <math.h>


	int multiplica_array(int arrayUm[], int arrayDois[], int result[], int size){
		
		int i;
		
    	for (i = 0; i < size; i++) {
    		
        	result[i] = arrayUm[i] * arrayDois[i];
    	}
	
	}


	int main() {
	
    int array1[] = {20, 2, 14, 5};
    int array2[] = {4, 10, 3, 6};
    
    int tamanho = sizeof(array1) / sizeof(array1[0]);
    
	int resultado[tamanho];
    
	multiplica_array(array1, array2, resultado, tamanho);
	

    	for (int i = 0; i < tamanho; i++){
    	
        	printf("%d ", resultado[i]);
    	}

    return 0;
    			
}
