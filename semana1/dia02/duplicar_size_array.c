/*
&n ALT+ 3
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("¿Cuántos números desea registrar?");
    scanf("%d",&n);
    //Reservamos memoria con malloc
    float* numeros=(float*)malloc(n * sizeof(float));
    if(numeros==NULL){
        printf("Error: no se pudo asignar memoria.\n");
        return 1;
    }
    // Ingreso de datos iniciales
    for(int i=0;i<n;i++){
        printf("Ingreso el numero %d: ",i+1);
        scanf("%f",&numeros[i]);
    }
    // mostrar datos
    printf("\n --- Lista Inicial --- \n");
    for(int i=0; i<n;i++){
        printf("numeros[%d]= %.2f\n",i,numeros[i]);
    }
    // DUPLICAMOS el tamaño con realloc
    int nuevo_tamano = n *2;
    numeros =(float*)realloc(numeros,nuevo_tamano * sizeof(float));
    if(numeros==NULL){
        printf("Error: nose puedo reasignar memoria.\n");
        return 1;
    }
    // Ingreso de nuevos datos
    printf("\n--- Ingrese %d números adicionales ---\n", n);
    for(int i=n;i<nuevo_tamano;i++){
        printf("Ingreso el numero %d: ",i+1);
        scanf("%f",&numeros[i]);
    }
    // mostrar datos
    printf("\n --- Lista Final --- \n");
    for(int i=0; i<nuevo_tamano;i++){
        printf("numeros[%d]= %.2f\n",i,numeros[i]);
    }
    free(numeros);
    return 0;
}