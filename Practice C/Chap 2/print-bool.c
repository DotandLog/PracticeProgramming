#include<stdio.h>

main()
{
    int i , j , k ;
    scanf("%d%d",&i,&j),
    k = (i==3);//"=="是等於的意思
    printf("%d\n",k);
    k = (i==j);
    printf("%d\n",k);
    return 0 ;
}