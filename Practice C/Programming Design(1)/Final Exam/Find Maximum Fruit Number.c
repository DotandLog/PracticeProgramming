#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 20000

void find_fruit(char input[],char fruit[][15]);

int main(void) {
	char fruit[20][15] = {
        "guava",
        "litchi",
        "longan",
        "watermelon",
        "pomelo",
        "pear",
        "banana",
        "papaya",
        "pumpkin",
        "tomato",
        "mango",
        "kiwi",
        "persimmon",
        "cantaloupe",
        "strawberry",
        "grape",
        "peach",
        "orange",
        "coconut",
        "lemon"
    };
    char input[N];
    scanf("%s", input);
    find_fruit(input,fruit);
    return 0;
}
void find_fruit(char input[],char fruit[][15]){
// input is the fruit sequence eg: watermelon+_+watermelon+_+coconut+_+grape+_+coconut
// fruit is 20 kinds of fruit name eg: fruit[0] is "guava", fruit[1] is litchi and so on. 
// you need to check the Loader code to understand above meaning
    char *token = strtok(input,"+_+");
    int count[20]={0};
    int min;
    while(token!=NULL){
        if(strcmp(token,fruit[1])==0){
            count[1]++;
        }
        if(strcmp(token,fruit[2])==0){
            count[2]++;
        }
        if(strcmp(token,fruit[3])==0){
            count[3]++;
        }
        if(strcmp(token,fruit[4])==0){
            count[4]++;
        }
        if(strcmp(token,fruit[5])==0){
            count[5]++;
        }
        if(strcmp(token,fruit[6])==0){
            count[6]++;
        }
        if(strcmp(token,fruit[7])==0){
            count[7]++;
        }
        if(strcmp(token,fruit[8])==0){
            count[8]++;
        }
        if(strcmp(token,fruit[9])==0){
            count[9]++;
        }
        if(strcmp(token,fruit[10])==0){
            count[10]++;
        }
        if(strcmp(token,fruit[11])==0){
            count[11]++;
        }
        if(strcmp(token,fruit[12])==0){
            count[12]++;
        }
        if(strcmp(token,fruit[13])==0){
            count[13]++;
        }
        if(strcmp(token,fruit[14])==0){
            count[14]++;
        }
        if(strcmp(token,fruit[15])==0){
            count[15]++;
        }
        if(strcmp(token,fruit[16])==0){
            count[16]++;
        }
        if(strcmp(token,fruit[17])==0){
            count[17]++;
        }
        if(strcmp(token,fruit[18])==0){
            count[18]++;
        }
        if(strcmp(token,fruit[19])==0){
            count[19]++;
        }
        if(strcmp(token,fruit[0])==0){
            count[0]++;
        }
        token = strtok(NULL,"+_+");
    }

    min=count[0];

    for(int i = 0  ; i<20 ; i++){
        if(count[i]<count[i+1]){
            min = count[i];
        }
    }
    for(int i = 0 ; i<20 ; i++){
        if(count[i]==min){
            printf("%s\n",fruit[i]);
            
        }
    }
}
