#include<stdio.h>

int main(void){
    int k,n;
    char c ;
    scanf("%d\n",&k);
    if (k<0){
        k = -k;
    }
    else{
        k=k;
    }
    n = k%26;
    for(int i =1  ; c != '\n'; i++){
        scanf("%c",&c);
        if((c>=65)&&(c<=90)){
            c +=n;
            if(c>90){
                c -= 26;
            }
        }
        else if((c >=97)&&(c <=122)){
            c +=n;
            if(c>122){
                c -= 26;
            }
        }
        else if(c=='\n'){
            break;
        }
        else{
            c = c;
        }

        printf("%c",c);
    }

    

}