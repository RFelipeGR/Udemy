#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *f;
    f=fopen("numeros.txt","r");
    int suma,numero;

    while (feof(f)==0){
        fscanf(f,"%d",&numero);
        suma=suma+numero;
    }
    printf("la suma de todos los numeros del ficheros es %d\n",suma);
    fclose(f);


    return 0;
}
