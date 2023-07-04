#include<stdio.h>

int main(){
    float pesos[5];
    float suma=0;
    for(int i=0;i<5;i++){
        printf("introduce un peso para almacenarlo");
        scanf("%f",&pesos[i]);
        suma =suma +pesos[i];
    }
    float promedio=suma/5;
    int cont_mayor_igual=0;
    int cont_menor=0;
    for(int i=0;i<5;i++){
        if (pesos[i]>=promedio){
            cont_mayor_igual++;

        }else{
            cont_menor++;
        }
    }
    printf("n pesos mayores o iguales al promedio: %d , n pesos menores que el promedio: %d", cont_mayor_igual,cont_menor);
    printf("el numero promedio de pesos es: %.2f", promedio);

    return 0;
}