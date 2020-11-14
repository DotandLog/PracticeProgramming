#include<stdio.h>
#include<math.h>

int main(void){
    int mode;
    scanf("%d\n",&mode);
    switch(mode){
        case 1:{
            double  l1 , v_1;
            scanf("%lf",&l1);
            v_1=l1*l1*l1;
            printf("%.2lf",v_1);
            break;
        }
        case 2:{
            double l2,w2,h2,v_2;
            scanf("%lf%lf%lf",&l2,&w2,&h2);
            v_2=l2*w2*h2;
            printf("%.2lf",v_2);
            break;
        }
        case 3:{
            double r3,h3,pi=3.14,v_3;
            scanf("%lf%lf",&r3,&h3);
            v_3=pi*r3*r3*h3;
            printf("%.2lf",v_3);
            break;
        }
        case 4:{
            double l4,v_4,squt_2;
            squt_2=sqrt(2);
            scanf("%lf",&l4);
            v_4=(squt_2/12)*l4*l4*l4;
            printf("%.2lf",v_4);
            break;
        }
        default:{
            break;
        }
    }
}