#include<stdio.h>

int main(void){
    int m , n ;
    scanf("%d%d",&m,&n);
    int a[m+n];
    for(int i = 0 ;i<m+n;i++){
        scanf("%d",&a[i]);
    }
    for(int x = 0;x<m+n;x++){
        for(int j =1 ; j<m+n ; j++){
            if(a[x]>a[j]){
                int temp = a[j];
                a[j]=a[x];
                a[x]=temp;
                j++;
                continue;
            }   
            else {
                a[j]=a[j];
            }
        }
    }
    for(int k = 0;k<m+n;k++){
        printf("%d ",a[k]);
    }
    

}