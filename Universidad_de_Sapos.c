#include <stdio.h>
#include <stdlib.h>
int main()
{
    float calificaciones[5] = {0};
    char estudiantes[5][20] = {0};
    char *materias[3] = {"Matematicas", "Fisica", "Quimica"};
    int opc = 0;
    int opc1 = 0;
    do
    {
        printf("Seleccione una opcion:\n");
        printf("1. Registrar estudiante:\n");
        printf("2.Registre las calificaciones\n");
        printf("3. Mostrar calificaciones\n");
        printf("4. Calcular promedio\n");
        printf("5. Salir\n");
        printf(">> ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            for (int i = 0; i < 5; i++)
            {
                printf("Ingrese el nombre del estudiante %d: ", i + 1);
                scanf("%s", estudiantes[i]);
            }
            break;
        case 2:
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("Ingrese la calificacion de %s en %s: ", estudiantes[i], materias[j]);
                    scanf("%f", &calificaciones[i]);
                    if (calificaciones[i] <= 0 || calificaciones[i] > 10)
                    {
                        printf("Error: valor ingresado es invalido\n");
                    }
                }
            }
            case 3:
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("Nombres\t\tCalificaciones\n");
                    printf("%s\t\t%.2f\n", estudiantes[i], calificaciones[j]);
                }
            }
            default:
                printf("No existe la opcion\n");
                break;
            }
            printf("Desea seleccionar otra opcion 1.Si/2.No: ");
            scanf("%d", &opc1);
        }
        while (opc == 1)
            ;
        return 0;
    }