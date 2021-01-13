#include<stdio.h>

int main(void){
    int m , n;
    unsigned long long int  sum_m=1 , sum_n=1, sum_mn=1 ;
    unsigned long long int  C_mn ;
    scanf("%d%d",&m,&n);

    if((m-n)>=n){
        for(int i =(m-n)+1;i<=m;i++){
            sum_m *=i;
        }
        for(int j =1;j<=n;j++){
            sum_n *=j;
        }
        C_mn=sum_m/sum_n;
        printf("%lld",C_mn);
    }
    else{
        for(int k =n+1;k<=m;k++){
            sum_m *=k;
        }
        for(int l =1;l<=(m-n);l++){
            sum_mn *=l;
        }
        C_mn=sum_m/sum_mn;
        printf("%lld",C_mn);
    }
}   