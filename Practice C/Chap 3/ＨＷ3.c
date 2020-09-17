#include<stdio.h>

int main(){
    int a , b , c , d , l , w , area ;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    l = ( a - c );
    w = ( b - d );
    if( l < 0 ){
        l = -l ;
    }
    if ( w < 0 ){
        w = -w ;
    }
    
    area = ((l==0)||(w==0))? 0: (l*w);
    printf("%d\n%d\n",l,w);
    printf("%d\n",area);
}