#include<stdio.h>

main()
{
    int i , j ,power ;
    scanf("%d%d",&i,&power);
    switch (power)
    {
    case 1:
        j = i;
        break;
    case 2:
        j = i * i;
        break;
    case 3:
        j = i * i * i;
        break;
    default:
        j = 0;
        break;
    }
    printf("%d\n",j);
return 0 ;
}