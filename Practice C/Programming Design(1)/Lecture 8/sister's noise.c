#include <stdio.h>

int main(void) {
    int arr[10] ;
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    int a[45] = {0} ;
    int k = 0;
    for (int i = 0; i < 10; i++)
    {
       int j = i+1;
       for(; j < 10; j++)
       {
             int m = i - j;
             if (m < 0)
                 m = -m;  
             a[k] = (arr[i] + arr[j]) * (m);
             k++;
        }
    }
    int max = a[0];
    for (int j = 1; j < 45; j++)
    {
        if(max < a[j])
            max = a[j];
    }
    printf("%d", max);
}
