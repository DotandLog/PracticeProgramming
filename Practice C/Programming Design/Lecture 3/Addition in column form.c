#include<stdio.h>

int main(void){
    int a , b , sum ;
    scanf("%d%d",&a,&b);
    sum = a + b ;
    printf("  ");
    printf("%04d\n",a);
    printf("+)%04d\n",b);
    printf("------\n");
    printf("%06d",sum);//如果是"%6d"則是輸出六位數，不足的地方為空白。
    return 0 ;
}