#include<stdio.h>

int main(void){//void的意思就是不用引入參數
    int sum_foot , sum_tails , sum , chicken , rabbit , crab , k  , l ;
    scanf("%d%d%d", &sum , &sum_foot , &sum_tails );
    crab = sum - sum_tails;
    rabbit = (sum_foot - ( 8 * crab) - (2 * sum_tails))/2;
    chicken = sum_tails - rabbit ;
    if ((crab < 0) || (rabbit < 0) || (chicken < 0)){
        printf("0");
    }
    else{
        printf("%d\n%d\n%d\n",chicken,rabbit,crab);
    }
    return 0; 
}