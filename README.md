# random-coordinates-generator
A simple program to generate coordinates, this program can be used to generate a set of coordinates to represent cities in the Cartesian plane.
Por supuesto, aquí tienes la documentación en formato Markdown para agregarla a un archivo `README.md`:

```markdown
# Generador de Coordenadas Aleatorias - Documentación

Este documento proporciona una descripción detallada del código en C que implementa un generador de coordenadas aleatorias y las guarda en un archivo de texto. El programa fue desarrollado por Armando Fabián Gonzalez con el propósito de crear una lista de coordenadas para su posterior uso en diversas aplicaciones.

## Objetivo del Programa

El objetivo principal de este programa es generar una lista de coordenadas aleatorias en un formato legible y almacenarla en un archivo de texto. Cada coordenada consta de un par de valores `X` e `Y` que se generan aleatoriamente dentro de un rango especificado. Las coordenadas generadas pueden ser útiles en aplicaciones de gráficos, visualización de datos y simulaciones.

## Estructura del Código

### Bibliotecas Incluidas

El código utiliza las siguientes bibliotecas estándar para gestionar entrada/salida, generación de números aleatorios y manejo del tiempo:

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
```

### Definición de la Estructura `point`

Se define una estructura llamada `point` que representa una coordenada en un plano bidimensional. Cada coordenada tiene dos componentes: `X` e `Y`.

```c
struct point {
    int X;
    int Y;
}
```

### Función Principal `main`

La función principal, `main`, recibe un argumento `M` que indica la forma deseada de la matriz de coordenadas.

```c
int main(int argc, char* args[]) {
    int M;
    scanf("introduce Shape of matrix: %d", &M);
    // M = atoi(args[1]);
    // Resto del código
}
```

### Generación de Coordenadas Aleatorias

El programa genera coordenadas aleatorias y las almacena en un arreglo de estructuras `point` llamado `listPoints`. Se utiliza la función `srand` para inicializar la semilla del generador de números aleatorios.

```c
    srand(time(NULL));
    // Resto del código
```

Se itera a través de las filas y columnas de la matriz para generar y almacenar coordenadas aleatorias.

### Escritura en Archivo

Las coordenadas generadas se escriben en un archivo llamado "list_points.txt". Si ocurre un error al abrir el archivo, se muestra un mensaje de error.

```c
    FILE* File;
    File = fopen("list_points.txt", "w");
    if(File == NULL) {
        printf("error to open file\n");
    }
    // Resto del código
```

### Resultado y Cierre de Archivo

El programa muestra la forma de la matriz y la cantidad total de coordenadas generadas. Luego, se cierra el archivo.

```c
    printf("shape of matrix(%d, %d)\n total coordinates generated: %d\n", M/2, M/2, (M*M)/4);
    fclose(File);

    return 0;
}
```

## Uso del Programa

Este programa es útil para generar una lista de coordenadas aleatorias que pueden utilizarse en una variedad de aplicaciones. El usuario debe proporcionar la forma deseada de la matriz al ejecutar el programa.

## Conclusión

El código presentado implementa un generador de coordenadas aleatorias en C. Las coordenadas generadas se almacenan en un archivo de texto, lo que puede ser útil para aplicaciones gráficas, simulaciones y análisis de datos. Si tienes preguntas adicionales o deseas explorar aspectos específicos del código, no dudes en preguntar.
```

Puedes copiar y pegar este contenido en tu archivo `README.md` para documentar el generador de coordenadas aleatorias. Si necesitas más ayuda o tienes alguna pregunta, estaré encantado de asistirte.
