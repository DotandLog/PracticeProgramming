#include<stdio.h>

int main(void){
    int i;
    char c;
    for(i=1 ; i<=20 ; i++){
        scanf("%c",&c);
        if(c=='A'){
            c = 'C';
        }
        else if(c=='B'){
            c = 'R';
        }
        else if(c=='C'){
            c = 'W';
        }
        else if(c=='D'){
            c = 'Z';
        }
        else if(c=='E'){
            c = 'G';
        }
        printf("%c",c);
    }
}