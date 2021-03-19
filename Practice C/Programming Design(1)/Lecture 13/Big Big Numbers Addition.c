void add(char a[], char b[], char res[]){

    int counta=0, countb=0;
    for(int i=0; ; i++)
    {
        while(a[i] != '\n')
        {
            counta++;
        }
        break;
    }
    for(int i=0; ; i++)
    {
        while(b[i] != '\n')
        {
            countb++;
        }
        break;
    }
    int max = (counta>countb ? counta:countb);
    if( max == counta)
    {
        for(int i = 0 ; i < (max-countb); i++)
        {
            b[i] = 0;
            for(int j = countb; j < max; j++ )
                b[j] = b[i];
        }
    }
    else
    {  
        for(int i = 0 ; i < (max-counta); i++)
        {
            b[i] = 0;
            for(int j = counta; j < max; j++ )
                b[j] = b[i];
        }
    }
    for(int i = max; i >= 0; i--)
    {
        res[i] = a[i] + b[i];
        if(res[i] >= 10)
        {
            res[i] = res[i] - 10;
            res[i-1] = res[i-1]+1;
        }
    }
}