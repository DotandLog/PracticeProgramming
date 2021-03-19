#include <stdio.h>
#define M 5
#define N 8
char colors[4] = {'R', 'G', 'B', 'X'};   // Red, Green, Blue, Empty

void spread(char*, int, int);

int main(void) {
    char graph[M][N];
    int row, col;

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++)
            scanf("%c", &graph[i][j]);
        getchar();      // Ignore '\n'
    }
    scanf("%d %d", &row, &col);    // Starting position
    
    spread(&graph[0][0], row, col);
    
    // Print out the spreading result
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++)
            printf("%c", graph[i][j]);
        printf("\n");
    }
    return 0;
}

void spread(char* graph, int row, int col) {
    char *p=graph;
    for(int i=0;(i+col)<N;i++){//往右開始。 
        if( *(p+N*row+col+i)== *(p+N*row+col) || *(p+N*row+col+i)=='X'){
            *(p+N*row+col+i)= *(p+N*row+col);
        }
        else{
            break;
        }
    }
    for(int i=0;col-i>=0;i++){//往左開始。
        if( *(p+N*row+col-i)==*(p+N*row+col)|| *(p+N*row+col-i)=='X'){
            *(p+N*row+col-i)=*(p+N*row+col);
        }
        else{
            break;
        }
        
    }
    for(int i=0;row-i>=0;i++){
        if( *(p+(N)*(row-i)+col)==*(p+N*row+col)||*(p+(N)*(row-i)+col)=='X'){
            *(p+(N)*(row-i)+col)=*(p+N*row+col);
        }
        else{
            break;
        }
        
    }
    for(int i=0;row+i<M;i++){
        if( *(p+(N)*(row+i)+col)==*(p+N*row+col)||*(p+(N)*(row+i)+col)=='X'){
            *(p+(N)*(row+i)+col)=*(p+N*row+col);
        }
        else{
            break;
        }
    }


}