#include<stdio.h>
#include<math.h>

int main(void){
float a , b , c ;
float s , area ;
scanf("%d%d%d",&a,&b,&c);
s = (a+b+c)/2;
area = s*(s-a)*(s-b)*(s-c);
printf("%.2f",sqrt(area));
}