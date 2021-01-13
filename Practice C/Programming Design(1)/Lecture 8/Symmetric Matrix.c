#include<stdio.h>

int main(void){
    int i,count=0;
    scanf("%d\n",&i);
    char s[i][i];
    for(int j=0;j<i;j++){
        for(int k=0;k<i;k++){
            scanf("%s",&s[j][k]);
        }
    }
    for(int a=0;a<i;a++){
        for(int b=0;b<i;b++){
            if(s[a][b]!=s[b][a]){
                count=1;
                break;
            }
        }
    }
    if(count==1){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }
}
