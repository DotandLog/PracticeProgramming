#include<stdio.h>

int main(void){
    int x1, x2, n , i ;
    for (;;){
        scanf("%d%d%d", &x1, &x2, &n);
        int sequence[n];
        sequence[0] = x1;
        sequence[1] = x2;
        if((x1==0)&&(x2==0)&&(n==0)){
            break;
        }
        else{
        for (int i = 2; i < n; i++){
        sequence[i] = sequence[i - 1] + sequence[i - 2];
        }
        printf("%d\n", sequence[n-1]);
        }
    }
}