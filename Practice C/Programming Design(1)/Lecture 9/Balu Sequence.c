#include <stdio.h>
long int b(int i)
{
    if(i <= 2)
        return 1;
    else 
        return (2 * b(i-1) + 3 * b(i-2)) % 1000000007;
}

int main(void){
    int i;
    scanf("%d", &i);
    printf("%ld", b(i));
}
