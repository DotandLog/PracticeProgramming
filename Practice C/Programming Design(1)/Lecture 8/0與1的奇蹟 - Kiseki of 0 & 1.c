#include <stdio.h>
void add(int arr[], int brr[], int crr[])
{
    int x = 0;
    for(int i = 31; i >= 0; i--)
    {
        crr[i] = arr[i] + brr[i] + crr[i];
        if(crr[i] >= 2)
        {
            x = crr[i] / 2;
            crr[i-1] = crr[i-1] + x;
            crr[i]  = crr[i] % 2;
        }
    }
}

int main(void){
    int arr[32];
    int brr[32];
    int crr[32] = {0} ;
    for(int i = 0; i < 32; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 32; i++)
    {
        scanf("%d", &brr[i]);
    }
    add(arr, brr, crr);
    for(int i = 0; i < 32; i++)
    {
        printf("%d ", crr[i]);
    }
   
}