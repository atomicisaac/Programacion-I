#include <stdio.h>
#include <stdlib.h>

int main () {
    int Stock;
    float Precio, Total_Venta, Ganancias;
    char Nombre[10], ID [10];
    int Unidad_Vender;

    int opc = 0, opc1=0;

    do
    {
        printf (" Ingrese el Id");
    scanf (ID);
    printf (" Ingrese el nombre del producto");
    scanf (Nombre);
    printf (" Cuantas unidads del producto existen?");
    scanf (Stock);
    printf ("Ingrese el precio del producto");
    scanf (Precio);

    printf ("Cuantas unidades quieres vender");
    scanf (Unidad_Vender);
    if (Unidad_Vender > Stock)
    {
        printf ("No se puede realizar la venta por chiro");
    }

    } while (opc1==1);
    
    
   
        
    



    return 0;
}
