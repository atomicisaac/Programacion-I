#include <stdio.h>

int main()
{

    char ID[10], nombre[20];
    int stock = 0;
    float precio;
    float totalVenta, ganancias = 0;
    int numVenta, numStock;

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
            printf("Ingrese el ID del producto: ");
            scanf("%s", &ID);
            printf("Ingrese el nombre del producto: ");
            scanf("%s", &nombre);
            do
            {
                printf("Ingrese el stock del producto (mayor a 0): ");
                scanf("%d", &stock);
                if (stock <= 0)
                {
                    printf("Error: valor ingresado es invalido\n");
                }
            } while (stock <= 0);
            printf("Ingrese el precio del producto: ");
            scanf("%f", &precio);
            printf("Producto Ingresado\n");
            break;
        case 2:
            printf("Ingrese el numero de unidades que desea vender: ");
            scanf("%d", &numVenta);
            if (numVenta > stock)
            {
                printf("No se puede realizar esta venta, no existe stock suficiente\n");
                break;
            }
            stock -= numVenta;
            totalVenta = numVenta * precio;
            ganancias += totalVenta;
            printf("El total de esta venta es: %.2f\n", totalVenta);
            break;
        case 3:
            printf("Ingrese el numero de unidades que desea reabastecer: ");
            scanf("%d", &numStock);
            stock += numStock;
            printf("El nuevo stock es: %d\n", stock);
            break;

        case 4:
            printf("ID\t\tNombre\t\tStock\t\tPrecio\t\tTotal\n");
            float totalProducto = stock * precio;
            printf("%s\t\t%s\t\t%d\t\t%.2f\t\t%.2f\n", ID, nombre, stock, precio, totalProducto);

            break;
        case 5:
            printf("Las ganancias son: %.2f\n", ganancias);
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