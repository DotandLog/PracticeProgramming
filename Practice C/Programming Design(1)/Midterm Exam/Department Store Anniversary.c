#include<stdio.h>

int main(void){
    int m , n ;
    scanf("%d%d",&m,&n);
    int a[m+n];
    for(int i = 0 ;i<m+n;i++){
        scanf("%d",&a[i]);
    }
    for(int j =0 ; j<m+n ; j++){
        if(a[j]>a[j+1]){
            int temp = a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
            j++;
            continue;
        }
        else {
            a[j]=a[j];
        }
    }
    for(int k = 0;k<m+n;k++){
        printf("%d ",a[k]);
    }

}