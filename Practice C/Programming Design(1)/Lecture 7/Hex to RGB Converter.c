#include<stdio.h>

int main(void){
    int r , g , b , hr1 , hr2 , hg1 , hg2 , hb1 , hb2;
    char  c ;
    scanf("%c%1x%1x%1x%1x%1x%1x",&c,&hr1,&hr2,&hg1,&hg2,&hb1,&hb2);
    r = 16*hr1+hr2;
    g = 16*hg1+hg2;
    b = 16*hb1+hb2;
    printf("rgb(%d,%d,%d)",r,g,b);

}