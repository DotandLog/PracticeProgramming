#include<stdio.h>

int main(){
    int a , b , c , d , l , w , lenth ;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    l = ( ( a - c ) > 0 )? ( a - c ) : -( a - c );
    w = ( ( b - d ) > 0 )? ( b - d ) : -( b - d );
    lenth = 2 * ( l + w ) ;
    printf("%d\n",lenth);
}