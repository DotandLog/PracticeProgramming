#include<stdio.h>

main()
{
    int i , j , temp;
    scanf("%d",&i);
    scanf("%d",&j);
    temp = i ;
    i = j ;
    j = temp ;
    printf("%d\n%d",i,j);
    return 0;
}