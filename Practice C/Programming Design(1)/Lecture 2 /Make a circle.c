#include<stdio.h>
#define Pi 3.14f

int main(void){
    int r ; float round , area ;
    scanf("%d",&r);
    round = 2 * Pi * r ;
    area = Pi * r * r ;
    printf("%.2f %.2f",area,round);
    return 0 ;
}