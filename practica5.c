#include<stdio.h>
int main(){
    int nota;
    printf("introduce la nota del alumno");
    scanf("%d",&nota);

    if (nota<5){
        printf("suspenso");
    }
    else if (nota==6)
    {
        printf("bien");
    }
    else if (nota==7 || nota==8)
    {
        printf("notable");
    }
    else if (nota==9 || nota==10)
    {
        printf("sobresaliente");
    }else
    {
        printf("nota introducida no valida");
    }
    
    
    return 0;
}