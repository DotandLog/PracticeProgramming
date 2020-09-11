#include<stdio.h>

main()
{
    int i = 1 , j = 2 , k = 3 ;
    scanf("%d",&i);
    k = j = i ;
    printf("%d\n%d\n%d\n",i,j,k);
    return 0;
}