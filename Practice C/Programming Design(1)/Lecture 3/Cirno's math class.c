#include<stdio.h>

int main(void){
    int x , y , z , a , b , c , d ;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    x = a ;
    y = x - b + c ;
    z = y - d ;
    printf("%04d %04d %04d",x,y,z) ;//“%04d"輸出四位，不足的用0補上。
    return 0 ;
}