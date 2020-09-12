#include<stdio.h>

main()
{
    int i , j ;
    scanf("%d%d",&i,&j);
    if ( i > j )
    {
        printf("%d\n%d\n",j,i);
    }
    else
    {
        printf("%d\n%d\n",i,j);
    }
    return 0 ;
}