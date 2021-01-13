void spread(char* graph, int row, int col) {

    for(int i = 1; i < (N-col); i++)
    {
        if(graph[row*N + col + i] == graph[row*N + col] || graph[row*N + col + i] == 'X')
            graph[row*N + col + i] = graph[row*N + col];
        else 
            break;   
    }
    for(int i = 1; i < col+1; i++)
    {
        if(graph[row*N + col - i] == graph[row*N + col] || graph[row*N + col - i] == 'X')
            graph[row*N + col - i] = graph[row*N + col];
        else 
            break;
        
    }
    for(int i = 1; i < (M-row); i++)
    {
        if(graph[(row+i)*N+ col] == graph[row*N + col] || graph[(row+i)*N+ col] == 'X')
            graph[(row+i)*N+ col] = graph[row*N + col];
        else 
            break;
        
    }
    for(int i = 1; i < row+1; i++)
    {
        if(graph[(row-i)*N+ col] == graph[row*N + col] || graph[(row-i)*N+ col] == 'X')
            graph[(row-i)*N+ col] = graph[row*N + col];
        else 
            break;    
    }
    
}