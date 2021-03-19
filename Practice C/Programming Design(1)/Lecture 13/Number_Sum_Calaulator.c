#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100

int addition(char str[]);

int main() {
    char str[N];
    scanf("%s", str);
    int sum = addition(str);
    printf("%d", sum);
    return 0;
}

int addition(char str[]){
    int temp,value=0;
    const char *s="+";
    char *token =strtok(str,s);
    while (token!=NULL){
        temp = atoi(token);
        value += temp;
        token = strtok(NULL,s);
    }
    return value;
}
