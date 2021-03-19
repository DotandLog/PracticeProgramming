int addition(char str[]){
 

    int arr[] = {0};
    int sum = 0;
    char *p=strtok(str,"+");
    for(int i = 0; p != NULL ; i++)
    {
        sum = sum + atoi(p); 
        p=strtok(NULL, " +");
    }
    return sum;
}