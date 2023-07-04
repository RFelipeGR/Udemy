#include<stdio.h>
int main(){
    float base , altura;
    printf("introduzca la base del rectangulo:  ");
    scanf("%f",&base);
    printf("introdusca la altura del rectangulo: ");
    scanf("%f",&altura);
    float area=base*altura;
    printf("el area del rectangulo de base %.2f y altura %.2f es: %.2f",base,altura,area);

    return 0;
}
