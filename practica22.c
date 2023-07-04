#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    struct hora_entrada{
        int hora;
        int minuto;
    };
    struct entrada{
        struct hora_entrada hora1;
        int asistentes;
        float precio;
    };
    struct entrada e1;
    char continuar ='s';

    while (continuar=='s'){
        printf("introduce la hora de entrada\n");
        scanf("%d",&e1.hora1.hora);

        printf("introduce el minuto de entrada\n");
        scanf("%d",&e1.hora1.minuto);

        printf("introduce el numero de asistentes\n");
        scanf("%d",&e1.asistentes);
        int total=0;

        for(int i=0;i<e1.asistentes;i++){
            int edad;
            printf("introduce la edad del asistente %d",(i+1));
            scanf("%d",&edad);
            if (edad<6){
                total=total+0;
            }
            else if(edad>=6 && edad<=15){
                total=total+5;
            }
            else if((edad>=16 && edad<=26) || (edad >65)){
                total=total+8;
            }
            else{
                total=total+10;
            }
        }
        if (e1.asistentes>=5){
            e1.precio=total-total*0.1;
        }
        else{
            e1.precio=total;
        }
        printf("hora de entrada del grupo %d\n", e1.hora1.hora);
        printf("minuto de entrada del grupo %d\n", e1.hora1.minuto);
        printf("precio de las entrada del grupo %f\n", e1.precio);

        printf("quiere continuar con otro grupo? (S/N)");
        scanf("%c",&continuar);
        while (continuar== '\n'){
            scanf("%c",&continuar);
        }
    }
    printf("hasta la proxima");
    return 0;
}