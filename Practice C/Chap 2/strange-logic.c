#include<stdio.h>

main()
{
    int i = 3 , j = 0 , k ;
    k = (i && j); //"&&"是i跟j都為真（就是等於0）時
    printf("%d\n",k);
    k = (i || j);//"||"是i跟j其中一個為真
    printf("%d\n",k);
    k = !i;//"!"為i為偽的時候成立
    printf("%d\n",k);

return 0 ;
}