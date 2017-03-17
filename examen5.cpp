#include <stdio.h>


int main(){

    int longitud, sumaH, sumaM, sumaS,i;
    int Hora[longitud];
    int Minutos[longitud];
    int Segundos[longitud];

    printf("Ingrese la longitud de los arreglos \n");
    scanf("%d",&longitud);

    for(i=0; i<longitud; i++){

            printf("Ingrese el valor en la posicion %d\n",i+1);
            scanf("%d",&Hora[i]);
            sumaH+=Hora[i];
             }
    for(i=0; i<longitud; i++){

            printf("Ingrese el valor en la posicion %d\n",i+1);
            scanf("%d",&Minutos[i]);
            sumaM+=Minutos[i];
             }
    for(i=0; i<longitud; i++){

            printf("Ingrese el valor en la posicion %d\n",i+1);
            scanf("%d", &Segundos[i]);
            sumaS+= Segundos[i];
             }

    while (sumaS<=60){
            sumaS=sumaS-60;
            sumaM+=1;


    }
    while (sumaM<=60){
            sumaM=sumaM-60;
            sumaH+=1;

    }
    printf("%d Horas %d minutos %d segundos",sumaH, sumaM, sumaS);

    return 0;

}
