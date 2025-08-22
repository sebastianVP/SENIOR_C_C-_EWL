/*
EJERCICIO 1:
Vamos a crear un pgorama en C que:
1. Pida al usuario cuantos numeros quiere ingresar.
2. Reserve memoria dinámicamente para almacenarlos.
3. Calcule el promedio y el máximo
4. Libere memoria antes de terminar.
*/

# include <stdio.c>
# include <stdlib.h>

int  main(){
	int n,i;
        float *numeros;
        float suma=0,maximo;
	printf("¿Cuantos numeros deseas ingresar?");
        scanf("%d",&n);

	//reservar memoria
        numeros= (float*) malloc(n * sizeof(float));
        if(numeros==NULL){
		printf("Error al reservar memoria. \n");
                return 1;
	}
        //LEER NUMERO
        for(i=0;i<n;i++){
	   printf("Numero %d:",i+1);
           scanf("%f",&numeros[i]);
           suma+=numeros[i];
           if(i==0||numeros[i]>maximo){
              maximo = numeros[i]
           }
	}
        //Resultado
        printf("\nPromedio = %.2f\n", suma/n);
        printf("Máximo = %.2f \n",maximo);
	//LIBERAR MEMORIA
	free(numeros);
        return 0;
}
