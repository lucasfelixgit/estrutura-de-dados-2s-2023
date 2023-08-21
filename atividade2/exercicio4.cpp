#include <stdio.h>

	
	void conta_int_array(int arrayNum[], int search, int size){
    
		int countNum = 0;
    
		for (int i = 0; i < size; i++){
        	
			if (arrayNum[i] == search){
            countNum++;
        }
    }
    
    printf("%d", countNum);
}

	int main(){
    
	int array[] = {10, 5, 2, 15, 2, 2};
    int buscaNum = 2;
	int tamanho = sizeof(array) / sizeof(array[0]);
    

    conta_int_array(array, buscaNum, tamanho);

    return 0;
    
}
