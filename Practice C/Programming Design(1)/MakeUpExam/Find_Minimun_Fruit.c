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
    int a;
    while(token!=NULL){
        for(int i = 0 ; i < 20 ; i++){
            if(strcmp(token,fruit[i])==0){
                count[i]++;
            }
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
//strawberry+_+pomelo+_+mango+_+pear+_+orange+_+kiwi+_+papaya+_+tomato+_+orange+_+pear+_+peach+_+tomato+_+litchi+_+coconut+_+pumpkin+_+grape+_+orange+_+mango+_+pumpkin+_+orange+_+watermelon+_+peach+_+lemon+_+orange+_+orange+_+watermelon+_+watermelon+_+orange+_+pumpkin+_+papaya+_+kiwi+_+longan+_+watermelon+_+litchi+_+lemon+_+litchi+_+pear+_+papaya+_+mango+_+strawberry+_+pomelo+_+coconut+_+watermelon+_+coconut+_+peach+_+pomelo+_+pear+_+strawberry+_+banana+_+pear+_+watermelon+_+tomato+_+litchi+_+longan+_+coconut+_+lemon+_+banana+_+litchi+_+pumpkin+_+banana+_+guava+_+lemon+_+guava+_+pomelo+_+persimmon+_+kiwi+_+pear+_+orange+_+mango+_+papaya+_+watermelon+_+grape+_+pear+_+lemon+_+pear+_+longan+_+watermelon+_+mango+_+pumpkin+_+tomato+_+grape+_+kiwi+_+mango+_+tomato+_+pear+_+pumpkin+_+pumpkin+_+watermelon+_+litchi+_+peach+_+tomato+_+litchi+_+papaya+_+litchi+_+orange+_+kiwi+_+cantaloupe+_+longan+_+litchi+_+watermelon+_+litchi+_+pomelo+_+coconut+_+papaya+_+watermelon+_+grape+_+litchi+_+banana+_+pear+_+tomato+_+papaya+_+cantaloupe+_+persimmon+_+orange+_+strawberry+_+orange+_+orange+_+strawberry+_+litchi+_+mango+_+mango+_+longan+_+persimmon+_+tomato+_+pomelo+_+tomato+_+guava+_+orange+_+pomelo+_+cantaloupe+_+guava+_+pear+_+coconut+_+kiwi+_+pomelo+_+litchi+_+coconut+_+orange+_+guava+_+pomelo+_+coconut+_+lemon+_+tomato+_+mango+_+orange+_+grape+_+pumpkin+_+banana+_+tomato+_+litchi+_+orange+_+lemon+_+watermelon+_+litchi+_+guava+_+papaya+_+longan+_+persimmon+_+peach+_+banana+_+banana+_+orange+_+pomelo+_+pomelo+_+guava+_+pumpkin+_+orange+_+coconut+_+banana+_+tomato+_+strawberry+_+pomelo+_+tomato+_+grape+_+papaya+_+coconut+_+mango+_+grape+_+peach+_+lemon+_+pumpkin+_+cantaloupe+_+mango+_+kiwi+_+banana+_+longan+_+lemon+_+tomato+_+grape+_+papaya+_+grape+_+litchi+_+peach+_+kiwi+_+orange+_+peach+_+guava+_+banana+_+papaya+_+coconut+_+pumpkin+_+cantaloupe+_+strawberry+_+orange+_+tomato+_+cantaloupe+_+papaya+_+kiwi+_+pumpkin+_+watermelon+_+kiwi+_+pumpkin+_+tomato+_+cantaloupe+_+guava+_+grape+_+peach+_+kiwi+_+pomelo+_+kiwi+_+coconut+_+persimmon+_+pomelo+_+grape+_+watermelon+_+cantaloupe+_+watermelon+_+grape+_+kiwi+_+mango+_+pear+_+lemon+_+pomelo+_+persimmon+_+peach+_+pear+_+pear+_+grape+_+peach+_+banana+_+lemon+_+papaya+_+strawberry+_+pumpkin+_+litchi+_+strawberry+_+grape+_+tomato+_+pear+_+guava+_+guava+_+peach+_+pomelo+_+peach+_+kiwi+_+lemon+_+tomato+_+banana+_+grape+_+guava+_+orange+_+guava+_+persimmon+_+cantaloupe+_+persimmon+_+pumpkin+_+coconut+_+coconut+_+peach+_+strawberry+_+pomelo+_+grape+_+strawberry+_+mango+_+grape+_+papaya+_+pear+_+mango+_+peach+_+longan+_+longan+_+pumpkin+_+coconut+_+banana+_+pomelo+_+litchi+_+banana+_+pear+_+pumpkin+_+cantaloupe+_+orange+_+orange+_+pear+_+tomato+_+longan+_+mango+_+mango+_+guava+_+guava+_+banana+_+banana+_+peach+_+cantaloupe+_+guava+_+banana+_+pumpkin+_+lemon+_+kiwi+_+mango+_+grape+_+banana+_+cantaloupe+_+grape+_+peach+_+kiwi+_+kiwi+_+coconut+_+orange+_+pumpkin+_+coconut+_+longan+_+banana+_+papaya+_+pumpkin+_+papaya+_+tomato+_+coconut+_+tomato+_+litchi+_+coconut+_+papaya+_+papaya+_+strawberry+_+persimmon+_+guava+_+guava+_+guava+_+lemon+_+pomelo+_+watermelon+_+papaya+_+mango+_+peach+_+strawberry+_+banana+_+papaya+_+banana+_+peach+_+orange+_+strawberry+_+banana+_+lemon+_+persimmon+_+cantaloupe+_+papaya+_+persimmon+_+strawberry+_+orange+_+cantaloupe+_+grape+_+grape+_+litchi+_+watermelon+_+tomato+_+pear+_+grape+_+longan+_+coconut+_+strawberry+_+banana+_+litchi+_+cantaloupe+_+peach+_+orange+_+pumpkin+_+longan+_+peach+_+strawberry+_+lemon+_+pear+_+guava+_+pear+_+pear+_+cantaloupe+_+kiwi+_+pomelo+_+orange+_+pear+_+longan+_+mango+_+litchi+_+tomato+_+watermelon+_+peach+_+lemon+_+tomato+_+watermelon+_+litchi+_+papaya+_+orange+_+lemon+_+pumpkin+_+watermelon+_+grape+_+orange+_+watermelon+_+tomato+_+cantaloupe+_+orange+_+pumpkin+_+kiwi+_+tomato+_+banana+_+peach+_+longan+_+orange+_+persimmon+_+kiwi+_+strawberry+_+banana+_+longan+_+papaya+_+peach+_+pear+_+grape+_+papaya+_+strawberry+_+coconut+_+guava+_+litchi+_+pumpkin+_+lemon+_+litchi+_+kiwi+_+banana+_+coconut+_+strawberry+_+grape+_+pomelo+_+watermelon+_+peach+_+grape+_+persimmon+_+longan+_+watermelon+_+papaya+_+kiwi+_+papaya+_+coconut+_+orange+_+strawberry+_+persimmon+_+pear+_+longan+_+coconut+_+guava+_+litchi+_+pomelo+_+lemon+_+cantaloupe+_+banana+_+lemon+_+pomelo+_+papaya+_+mango+_+mango+_+coconut+_+peach+_+orange+_+longan+_+lemon+_+cantaloupe+_+tomato+_+watermelon+_+papaya+_+persimmon+_+longan+_+mango+_+lemon+_+cantaloupe+_+pumpkin+_+pear+_+pear+_+pear+_+lemon+_+watermelon+_+pear+_+persimmon+_+pumpkin+_+peach+_+pear+_+banana+_+grape+_+litchi+_+pear+_+orange+_+watermelon+_+grape+_+cantaloupe+_+litchi+_+orange+_+pomelo+_+banana+_+coconut+_+guava+_+strawberry+_+mango+_+longan+_+pomelo+_+longan+_+papaya+_+pomelo+_+lemon+_+cantaloupe+_+tomato+_+lemon+_+pumpkin+_+papaya+_+kiwi+_+pumpkin+_+grape+_+tomato+_+banana+_+watermelon+_+longan+_+pomelo+_+guava+_+banana+_+lemon+_+banana+_+lemon+_+tomato+_+longan+_+pear+_+papaya+_+longan+_+kiwi+_+mango+_+orange+_+pumpkin+_+persimmon+_+pomelo+_+persimmon+_+kiwi+_+tomato+_+strawberry+_+longan+_+mango+_+litchi+_+strawberry+_+coconut+_+pumpkin+_+grape+_+orange+_+kiwi+_+orange+_+litchi+_+pomelo+_+watermelon+_+persimmon+_+longan+_+longan+_+litchi+_+pomelo+_+guava+_+tomato+_+lemon+_+kiwi+_+lemon+_+peach+_+lemon+_+watermelon+_+persimmon+_+pomelo+_+strawberry+_+strawberry+_+coconut+_+orange+_+pomelo+_+lemon+_+watermelon+_+strawberry+_+lemon+_+mango+_+kiwi+_+kiwi+_+papaya+_+pomelo+_+papaya+_+watermelon+_+orange+_+tomato+_+orange+_+coconut+_+pear+_+orange+_+lemon+_+pomelo+_+litchi+_+mango+_+persimmon+_+guava+_+cantaloupe+_+pear+_+peach+_+guava+_+lemon+_+strawberry+_+tomato+_+grape+_+pear+_+persimmon+_+tomato+_+pear+_+strawberry+_+litchi+_+peach+_+litchi+_+pear+_+grape+_+peach+_+strawberry+_+pomelo+_+banana+_+cantaloupe+_+tomato+_+grape+_+persimmon+_+banana+_+peach+_+watermelon+_+coconut+_+tomato+_+pumpkin+_+watermelon

