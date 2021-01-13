#include<stdio.h>

int main(void){
    char c;
    int count = 0 ;
    for(int i =1 ; ; i++){
        c= getchar();
        if(c==' '){
            count++;
            continue;
        }
        if(count>=1){
            printf(" %c",c);
            count = 0;
        }
        else if(c =='\n'){
            break;
        }
        else{
            printf("%c",c);
        }
    }
}