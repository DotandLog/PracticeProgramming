#include <stdio.h>
#include <stdlib.h>
#define n 8000

// Ignore this
void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*)){exit(1);}
// Ignore this

void quicksort(int a[], int low, int high);
int main(void) {
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        quicksort(a, 0, n - 1);
    }
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
} 

void quicksort(int a[], int low, int high) {
    for (int i = low; i <= high; i++){
        for (int j = i; j <= high;j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
