#include <stdio.h>
int sum(int , int );

int main(void){
    int n, m;
    scanf("%d%d", &n,&m);
    printf("%d", sum(n,m));
    
}

int sum(int n, int m)
{
    if(m == 0 || m == n)
        return 1;
    else
        return sum(n-1, m-1) + sum(n-1, m);
}
