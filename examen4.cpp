#include <stdio.h>


int main(){

    float B=8000, conversion;
    float KB=1.024;
    float MB=1.024;
    float GB=1.024;
    float numero;
    int opcion;

    printf("Porfavor, ingrese un valor en terabytes\n");
    scanf("%f", &numero);

    printf("1.Bytes\n");
    printf("2.KiloBytes\n");
    printf("3.MegaBytes\n");
    printf("4.GigaBytes\n");
    scanf("%d", &opcion);

    switch(opcion){

    case 1:
        conversion= numero*GB*MB*KB*B;
        printf("su numero en Bytes es: %f\n",conversion);
        break;
    case 2:
        conversion= numero*GB*MB*KB;
        printf("su numero en Kilobytes es: %f\n",conversion);
        break;
    case 3:
        conversion= numero*GB*MB;
        printf("su numero en Megabytes es: %f\n",conversion);
        break;
    case 4:
        conversion= numero*GB;
        printf("su numero en GigaBytes es: %f\n",conversion);
        break;
    default :
        printf("Numero incorrecto");
    }
    return 0;
}
