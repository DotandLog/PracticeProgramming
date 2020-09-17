#include<stdio.h>

int main(void){//void的意思就是不用引入參數
    int sum_foot , sum_tails , sum , chicken , rabbit , crab , k  , l ;
    scanf("%d", &sum , &sum_foot , &sum_tails );
    rabbit = sum_tails ;
    k = sum - sum_tails ;//雞＋螃蟹
    l = sum_foot - 4*rabbit ;//2雞＋８螃蟹
    crab = ( l - 2 * k ) / 7 ;
    chicken = ( k - crab );
    printf("%d\n%d\n%d\n",chicken,rabbit,crab);
    return 0; 
}