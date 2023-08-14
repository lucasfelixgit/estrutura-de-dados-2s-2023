#include <stdio.h>
#include <stdlib.h>

    int main(int argc, char *argv[]){

        int numero;
        int i;
        int result = 0;

            numero = atoi(argv[1]);
            

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