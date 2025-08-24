# **DIA 2: Manejo de memoria dinamica en C y punteros**
🎯 Objetivo del día
Comprender como reservar, usar y liberar memoria dinámica en C usando **malloc,calloc,realloc y free**, 
ademas de reforzar el concepto de punteros.

📚 Teoría clave

1. Variables estáticas vs dinámicas

* Estáticas: definidas en tiempo de compilación (int arr[10];) → tamaño fijo.

* Dinámicas: definidas en tiempo de ejecución (int *arr = malloc(n * sizeof(int));) → tamaño flexible.

2. Funciones de memoria

* malloc(n * sizeof(tipo)) → reserva memoria sin inicializar.

* calloc(n, sizeof(tipo)) → reserva memoria inicializada en 0.

* realloc(ptr, nuevo_tamaño) → cambia el tamaño de un bloque ya reservado.

* free(ptr) → libera la memoria (obligatorio).

3. Punteros y memoria

* Un puntero almacena direcciones de memoria.

* *ptr → accede al valor contenido en la dirección.

* &var → obtiene la dirección de var.
