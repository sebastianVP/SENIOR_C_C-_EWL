#**DIA 2 - ESTRUCTURAS Y MODULARIZACION EN C**

🎯 Objetivo

* Aprender a organizar datos complejos usando struct.

* Separar código en módulos (.h y .c) para proyectos más escalables.

📚 Teoría clave

1. Estructuras (struct)

* Permiten agrupar distintos tipos de datos bajo un solo nombre.

 ```
struct Sensor {
    int id;
    float lectura;
    char nombre[20];
};
 ```

* Se pueden declarar arrays de estructuras o punteros a estructuras.

2. Acceso a estructuras

* sensor.id → acceso normal.

* ptr->id → acceso con puntero.

3. Modularización en C

* Dividir en:

	* archivo de cabecera (.h) → define funciones, estructuras, constantes.

	* archivo de implementación (.c) → implementa las funciones.

	* archivo principal (main.c) → usa las funciones.

Ejemplo de organización:


proyecto/
├── sensor.h
├── sensor.c
└── main.c
