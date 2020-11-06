#include<stdio.h>

int main(void){
    float x , sum ;
    scanf("%e",&x);
    sum = (7*x*x*x*x)-(8*x*x*x)-(x*x)+(6*x)-22;
    printf("%.1f",sum);
}