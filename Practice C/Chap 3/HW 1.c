#include<stdio.h>

int main()
{
    int  i , j , k , min ;
    scanf("%d%d%d",&i,&j,&k);
    if( i > j )
    {
        min = j ;
    }
    else
    {
        min = i ;
    }
    if ( min > k )
    {
        min = k ;
    }
    printf("%d\n",min);

}