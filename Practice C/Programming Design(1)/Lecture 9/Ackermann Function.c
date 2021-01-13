#include <stdio.h>
long int a(int n, int m)
{
    if(n == 0)
       return m+1;
    else if(m == 0)
       return a(n-1,1);
    else
        return a(n-1,a(n,m-1));
}

int main(void){
    int n, m;
    scanf("%d%d", &n,&m);
    printf("%ld", a(n,m));
}
