#include<stdio.h>

int main(){
    int a , b , c , D ;
    scanf("%d%d%d",&a,&b,&c);
    D = ( b * b ) - 4 * ( a * c );
    if ( D > 0 ){
        D = 1;
    }
    else if ( D == 0 ){
        D = 2;
    }
    else{
        D = 3;
    }
    switch (D)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("0");
        break;
    case 3:
        printf("-1");
        break;
    default:
        printf("error");
        break;
    }
}