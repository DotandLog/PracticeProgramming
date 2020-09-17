#include<stdio.h>

int main()
{
    int a , b , c , d , e , f , r1 , r2 , r3 , max , distance ;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    r1 = (( a * a ) + ( b * b )) ;
    r2 = (( c * c ) + ( d * d )) ;
    r3 = (( e * e ) + ( f * f )) ;
    if ( r1 >= r2 ){
        max = r1 ;
    }
    else {
        max = r2 ;
    }
    if ( r3 > max ){
        max = r3 ;
    }

    if ( max == r1 ){//"等於"用的是"＝＝"
        distance = 1 ;
    }
    else if ( max == r2 ){
        distance = 2 ;
    }
    else{
        distance = 3 ;
    }

    switch (distance)
    {
    case 1:
        printf("%d\n%d\n",a,b);
        break;
    case 2:
        printf("%d\n%d\n",c,d);
        break;
    case 3:
        printf("%d\n%d\n",e,f);
        break;
    default:
        printf("error");
        break;
    }
}