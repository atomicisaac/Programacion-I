#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ID[5][20] = {"", "", "", "", ""}, nombre[5][20] = {"", "", "", "", ""};
    int stock[5] = {0, 0, 0, 0, 0};
    float precio[5] = {0, 0, 0, 0, 0};
    float ganancias[5] = {0, 0, 0, 0, 0};
    double totalVenta[5] = {0, 0, 0, 0, 0};
    int numVenta[5] = {0, 0, 0, 0, 0}, numStock[5] = {0, 0, 0, 0, 0};
    
    int opc = 0, opc1 = 0;

    do
    {
        printf("Seleccione una opcion:\n");
        printf("1.Registrar producto\n");
        printf("2.Vender producto\n");
        printf("3.Reabastecer producto\n");
        printf("4.Informacion producto\n");
        printf("5.Mostrar ganancias\n");
        printf("6.Salir\n");
        printf(">>");

        scanf("%d", &opc);

        switch (opc)
        {
        case 1:

            for (int i = 0; i < 5; i++)
            {
                printf("Ingrese el ID del producto: ");
                scanf("%s", ID[i]);
                printf("Ingrese el nombre del producto: ");
                scanf("%19s", nombre[i]);
                do
                {
                    printf("Ingrese el stock del producto (mayor a 0): ");
                    scanf("%d", &stock[i]);
                    if (stock <= 0)
                    {
                        printf("Error: valor ingresado es invalido\n");
                    }
                } while (stock <= 0);
                printf("Ingrese el precio del producto: ");
                scanf("%f", &precio[i]);
                printf("Producto Ingresado\n");
            }

            break;
        case 2:
        {
            printf("Que producto desea vender? 'ID'\n");
            scanf("%s", ID[5][20]);
           
                 printf("Ingrese el numero de unidades que desea vender: ");
                scanf("%d", &numVenta[5]);
                if (numVenta > stock)
                {
                    printf("No se puede realizar esta venta, no existe stock suficiente\n");
                    break;
                }
                stock[5] -= numVenta[5];
                totalVenta[5] = numVenta [5]* precio[5];
                ganancias[5] += totalVenta[5];
                printf("El total de esta venta es: %.2f\n", totalVenta);
        
            }
            
               

        break;
        case 3:
        {
            printf("Que producto desea reestablecer?");
            scanf("%s", ID);
            printf("Ingrese el numero de unidades que desea reabastecer: ");
            scanf("%d", &numStock[5]);
            stock[5] += numStock[5];
            printf("El nuevo stock es: %d\n", stock[5]);
        }

        break;

        case 4:
        {
            printf("Que producto desea mostrar?");
            scanf("%c", ID[5]);
            printf("ID\t\tNombre\t\tStock\t\tPrecio\t\tTotal\n");
            float totalProducto = stock[5] * precio[5];
            printf("%s\t\t%s\t\t%d\t\t%.2f\t\t%.2f\n", ID[5], nombre[5], stock[5], precio[5], totalProducto);
        }

        break;
        case 5:
        {
            printf("Que producto desea mostrar?");
            scanf("%s", ID[5][20]);
            printf("Las ganancias son: %.2f\n", ganancias);
        }

        break;
        case 6:
            return 0;
            break;
        default:
            printf("No existe la opcion\n");
            break;
        }

        printf("Desea seleccionar otra opcion 1.Si/2.No: ");
        scanf("%d", &opc1);
    } while (opc1 == 1);

    return 0;
}