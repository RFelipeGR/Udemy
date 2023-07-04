#include<stdio.h>
int main(){
    char cadena[50];
    char caracter;
    printf("introduce una cadena");
    gets(cadena);
    printf("introduce un caracter");
    caracter=getchar();
    int i=0;
    int pos=-1;
    while (cadena[i]!='\0'&& pos==-1)
    {
        if(cadena[i]==caracter){
            pos=i;
        }
        i=i+1;
    }
    if (pos!=-1){
        printf("el caracter %c se encuentra en la cadena %d en la posicion %d",caracter,cadena,pos);
    }
    else{
        printf("el caracter %c no se encuentra en la cadena %s",caracter,cadena);
    }
    
    return 0;
}