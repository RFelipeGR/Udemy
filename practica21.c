#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    struct cilindro{
        float diametro;
        float carrera;
    };
    struct motor{
        int identificador;
        struct cilindro cilindro1;
        int num_cilindros;
        float cilindrada;
    };
    
    struct motor motor1;

    printf("introduce e identificador\n");
    scanf("%d",motor1.identificador);
    printf("introduce el diametro del cilindro\n");
    scanf("%f",&motor1.cilindro1.diametro);
    printf("introduce la carrera del cilindro\n");
    scanf("%f",&motor1.cilindro1.carrera);
    printf("introduce el numero de cilindros\n");
    scanf("%d",&motor1.num_cilindros);

    motor1.cilindrada=(motor1.num_cilindros*(motor1.cilindro1.carrera/10)*M_Pi*pow(motor1.cilindro1.diametro/10,2))/4;

    printf("identificador: %d", motor1.identificador);
    printf("diametro: %.2f",motor1.cilindro1.diametro);
    printf("carrera: %.2f",motor1.cilindro1.carrera);
    printf("no cilindros: %d",motor1.num_cilindros);
    printf("cilindrada: %.2f",motor1.cilindrada);
    
}