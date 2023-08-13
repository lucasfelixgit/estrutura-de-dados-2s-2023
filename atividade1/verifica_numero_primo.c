#include <stdio.h>

    int main(){

        int numero;
        int i;
        int result = 0;

            printf("Digite um Numero: ");
            scanf("%d", &numero);
            

                for(i = 2; i < numero / 2; i++){

                    if(numero % i == 0){
                        result ++;
                        break;
                    }

                }


                if(result == 0){
                    printf("1");
                }
                
                else{
                    printf("0");
                }


        return 0;

    }