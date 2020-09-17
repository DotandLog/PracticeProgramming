#include<stdio.h>

int main(){
    int a , b , c ;
    scanf("%d%d%d",&a,&b,&c);
    if ( (a * a + b * b  == c * c) || ( a * a + c * c  == b * b ) || ( b * b + c * c  == a * a)){
        printf("3");
    }
    else if (( a * a + b * b  > c * c) || ( a * a + c * c  > b * b ) || ( b * b + c * c  > a * a)){
        printf("1");
    }
    else{
        printf("2");
    }
}