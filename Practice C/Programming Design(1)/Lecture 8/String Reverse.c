#include<stdio.h>
int main(void){
    int i ;
    scanf("%d\n",&i);
    char a[i] ;
    for(int j=0;j<=i-1;j++){
        a[j]=getchar();
    }
    for(int k=(i-1);k>=0;k--){
        printf("%c",a[k]);
    }
}