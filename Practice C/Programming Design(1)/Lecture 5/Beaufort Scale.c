#include<stdio.h>

int main(void){
    int N ;
    scanf("%d",&N);
    if((N>=0)&&(N<=27)){
        if(N<1){
            printf("Calm");
        }
        else if ((N>=1)&&(N<=3)){
            printf("Light air");
        }
        else{
            printf("Breeze");
        }
    }
    else if ((N>27)&&(N<=100)){
        if((N>=28)&&(N<=47)){
            printf("Gale");
        }
        else if((N>=48)&&(N<=63)){
            printf("Storm");
        }
        else{
            printf("Hurricane");
        }
    }
    }
