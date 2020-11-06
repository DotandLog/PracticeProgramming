#include<stdio.h>

int main(void){
    int a1 , a2 , a3 , b1 , b2 , b3 , c1 , c2 , c3 , d1 , d2 , d3 , vx1 , vx2 , vx3 , vy1 , vy2 , vy3 ;
    scanf("%d%d%d%d",&a1,&b1,&c1,&d1);
    scanf("%d%d%d%d",&a2,&b2,&c2,&d2);
    scanf("%d%d%d%d",&a3,&b3,&c3,&d3);
    vx1 = (c1-a1);
    vx2 = (c2-a2);
    vx3 = (c3-a3);
    vy1 = (d1-b1);
    vy2 = (d2-b2);
    vy3 = (d3-b3);
    if( (vx1 == vx2 + vx3) && (vy1 == vy2 + vy3) ){ 
        printf("1");
    }
    else if ((vx1 == vx2 - vx3) && (vy1 == vy2 - vy3)){
        printf("1");
    }
    else if ((vx1 == -vx2 + vx3) && (vy1 == -vy2 + vy3)){
        printf("1");
    }
    else if ((vx1 == -vx2 - vx3) && (vy1 == -vy2 - vy3)){
        printf("1");
    }
    else{
        printf("0");
        
    }
}