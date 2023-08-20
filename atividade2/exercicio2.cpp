#include<stdio.h>


  int maior_menor_array(int arrayNum[], int size){
  	
	int i,
  	menorNum = arrayNum[0],
  	maiorNum = arrayNum[0];
  	
  	for(i = 1; i < size; i++){
    	
		if(arrayNum[i] < menorNum){ 
			
			menorNum = arrayNum[i];
    	}

    	if(arrayNum[i] > maiorNum){
    		
      		maiorNum = arrayNum[i];
    	}

  	}
  	
	printf("%d, %d", menorNum, maiorNum);
  
  }

	int main(){

  	int array[] = {10,3,8,15};
  	int tamanho = sizeof(array) / sizeof(array[0]);
 		
	maior_menor_array(array,tamanho);
  
  	return 0;
  	
	}	
