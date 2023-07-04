#include<stdio.h>

int main(){
    int numero=-1, suma=0, contador=0;
while (numero!=0)
{
    printf("introduce un numero \n");
    scanf("%d",&numero);
    contador++;
    suma+=numero;
}
float promedio=suma/contador;
printf("la suma de todos lo numeros es: %d y el promedio es: %.2f",suma,promedio);
    return 0;
}