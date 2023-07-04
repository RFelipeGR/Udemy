#include<stdio.h>

int main(){
    int n,  contador_aprobado=0, contados_suspenso=0;
    float nota;
    printf("introduce el numero de alumnos");
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        printf("introduce la nota del alumno %d\n",i);
        scanf("%f",&nota);
        if (nota>=5){
            contador_aprobado++;
        }
        else{
            contados_suspenso++;
        }
    }
    printf("el numero de aprobados es %d y el de alumnos supensos es: %d\n", contador_aprobado, contados_suspenso);
    return 0;
}