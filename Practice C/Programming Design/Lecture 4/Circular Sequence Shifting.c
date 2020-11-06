#include<stdio.h>

int main(void){
    int n , x , a , b ;
    scanf("%d%d%d",&n,&x,&a);
    b = a + (x%n) ;
    if (n == 0){
        b = 0;
    }
    else if(b>(n-1)){
        b = b - n;
    }
    printf("%d",b);
    return 0 ;
}