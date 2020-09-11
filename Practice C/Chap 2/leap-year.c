#include<stdio.h>

main()
{
    int year , k ;
    printf("請輸入年份");
    scanf("%d",&year);
    k = (year % 400 == 0 ) || ((year % 4 == 0) && (year % 100 != 0));
    printf("%d",k);

return 0 ;
}