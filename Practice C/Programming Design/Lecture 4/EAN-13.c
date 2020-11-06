#include<stdio.h>

int main(void){
    int a , b , c , o1 , e1 , o2 , e2 , o3 , e3 , o4 , e4 , o5 , e5 , o6 , e6 , sum , check_digit ;
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&o1 , &e1 , &o2 , &e2 , &o3 , &e3 , &o4 , &e4 , &o5 , &e5 , &o6 , &e6);
    sum = (o1+o2+o3+o4+o5+o6)+((e1+e2+e3+e4+e5+e6)*3);
    check_digit = (10 - (sum % 10)) % 10;
    printf("%d",check_digit);
    return 0;
}