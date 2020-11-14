#include<stdio.h>

int main(void){
    int a , b , c , middle;
    scanf("%d%d%d",&a,&b,&c);
    if(((a<b)&&(b<c))||(c<b)&&(b<a)){
        middle = b;
    }
    else if (((a<c)&&(c<b))||((b<c)&&(c<a))){
        middle = c;
    }
    else{
        middle = a;
    }
    printf("%d",middle);
    return 0;
    }
