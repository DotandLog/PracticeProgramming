#include<stdio.h>

int main(void){
    int N ,x ;
    double R , sum=1;
    scanf("%lf%d",&R,&N);
    for(int i =1; i<=N ; i++){
        sum =sum * R;
    }
    x = sum;
    printf("%d",x);
}
