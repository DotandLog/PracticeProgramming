#include<stdio.h>

int main(void){
    float a , b , k ;
    scanf("%e%e",&a,&b);
    k = a / b ;
    printf("%.1f",k);
    printf(" ");
    printf("%.2f",k);
    return 0 ;
}