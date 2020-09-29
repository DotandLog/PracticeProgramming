#include<stdio.h>

int main(void){
    int i = 1 , sum = 0 , k ;
    printf("請輸入要加到的數字");
    scanf("%d",&k);
    while (i<=k)
    {
        sum += i ;
        i ++ ;
    }
    printf("1加到%d的總和為%d",k,sum);
    return 0 ;
}