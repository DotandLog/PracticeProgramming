int search(dict_t arr[], char target[]){

    for(int i = 0; i < N; i++)
    {
            for(int j = 0; j < N; j++)
            {
                if( arr[i].word[j] == target[j] )
                {
                    if( arr[i].word[j] == '\0')
                        return arr[i].page;
                        continue;
                }   
                else
                    break;
            }
    }
    
    return 0;
}