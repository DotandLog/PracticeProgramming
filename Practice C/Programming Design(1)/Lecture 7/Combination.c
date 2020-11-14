#include<stdio.h>

int main(void){
    int m , n;
    unsigned long long int  sum_m , sum_m_=1 , sum_n=1 , sum_mn=1 ,sum_nmn;
    unsigned long long int  C_mn ;
    scanf("%d%d",&m,&n);
    for(int j =n ; j<=n ; j++){
        sum_n *=j;
    }
    for(int i=n ; i<=m ; i++){
        sum_m_ *=i;
    }
    
    for(int k =1 ; k<=(m-n) ;k++){
        sum_mn *=k;
    }
    sum_m=sum_n+sum_m_;
    sum_nmn=(sum_n*sum_mn);
    C_mn = (sum_m)/sum_nmn;
    printf("%lld",C_mn);
    printf("\n%lld",sum_m);
}