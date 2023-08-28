#include <stdio.h>

int main() {
	
    
    int x[100];
    float y[100];
    int count = 0;
    float somaX = 0.0, somaY = 0.0, somaXY = 0.0, somaXQuadrado = 0.0;
    FILE *arch;
    

    	arch = fopen("dados.csv", "r");
    	
    
    	if (arch == NULL) {
    	
        	printf("Nao foi possivel encontrar o arquivo.\n");
        	return 1;
    	}

    	while (count < 100 && fscanf(arch, "%d,%f", &x[count], &y[count]) == 2) {
        	
			count++;
    	}
    	

    	fclose(arch);
    	
    	
    	for (int i = 0; i < count; i++) {
    		
       		printf("Linha %d: X = %d / Y = %.2f\n", i + 1, x[i], y[i]);
    	}

    	for (int i = 0; i < count; i++) {
    		
       		somaX += x[i];
    	} 
    	

    	float mediaX = somaX / count;
    	
		
        printf("\n\nMedia X: %.2f\n", mediaX);
        

    	for (int i = 0; i < count; i++) {
    		
        	somaY += y[i];
    	} 
    	

    	float mediaY = somaY / count;

        
		printf("\nMedia Y: %.2f\n", mediaY);

    
    	for (int i = 0; i < count; i++) {
    		
        	somaX += x[i];
        	somaY += y[i];
        	somaXY += x[i] * y[i];
        	somaXQuadrado += x[i] * y[i];
        	
    	} 
    	

    	float coeAng = (count * somaXY - somaX * somaY) / (count * somaXQuadrado - somaX * somaX);
    	
    
    	printf("\nCoeficiente angular = %.2f\n", coeAng);


    	float intercept = mediaY - (coeAng * mediaX);
    	
    	
    	printf("\nCoeficiente linear = %.2f\n", intercept);
    	

    	printf("\nRegressao linear: Y = %.2fX + %.2f\n", coeAng, intercept);

    	return 0;
	}
