void quicksort(int a[], int low, int high) {

    for(int i = low; i < high; i++)
    {
        for(int j = i; j <= high; j++)
        {
            if(a[i] > a[j])
            {
                int tem = a[j];
                a[j] = a[i];
                a[i] = tem;
                
            }
        }
    }
        
}
