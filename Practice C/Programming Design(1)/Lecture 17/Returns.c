int* Returns(int n) {
    int *tem = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
    {
        tem[i] = i*i;
    }
    return tem;
}
