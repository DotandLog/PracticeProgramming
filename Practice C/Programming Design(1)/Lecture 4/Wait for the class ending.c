#include<stdio.h>

int main(void){
    int hour , minute , a , b ;
    scanf("%d%d",&hour,&minute);
    b = minute + 50 ;
    a = hour;
    if(b >= 60 ){
        b -= 60 ;
        a += 1 ;
    }
    printf("%02d:%02d\n",a,b);
}