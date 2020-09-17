#include<stdio.h>

int main(){
    int a , b , h , sum ;
    scanf("%d%d",&a,&b);
    h = ( a - b > 0 )? ( a - b ) + 1 : -( a - b ) + 1 ;
    sum = (h * ( a + b ))/ 2 ;
    printf("%d\n",sum);
}