#include <stdio.h>
#include <stdlib.h>
int main() {
    float calificaciones[5] = {0};
    char estudiantes [5][20]= {0};
    char *materias[3] = {"Matematicas", "Fisica", "Quimica"};
    for (int i = 0; i < 5; i++) {
        printf("Ingrese el nombre del estudiante %d: ", i + 1);
        scanf("%s", estudiantes[i]);
        for (int j = 0; j < 3; j++) {
            printf("Ingrese la calificacion de %s en %s: ", estudiantes[i], materias[j]);
            scanf("%f", &calificaciones[i]);
        }
    }
   
    return 0;
}