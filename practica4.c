#include<stdio.h>

int main(){
    float euros;
    printf("introduce los euros que quieres convertir\n");
    scanf("%f",&euros);
    
    printf("%.2f euros equivalen a %.2f pesetas",euros, euros*166.386);


    return 0;
}