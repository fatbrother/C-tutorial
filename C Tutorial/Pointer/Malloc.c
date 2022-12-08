#include <stdio.h>
#include <stdlib.h>
int* fibArray(int n) {
    int *a = (int*)malloc(n * sizeof(int));
    a[0] = 0, a[1] = 1;
    for (int i = 2; i < n; i++) 
        a[i] = a[i - 1] + a[i - 2];
    return a;
}
int main() {
    int n = 10, *a = fibArray(n);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    free(a);
    return 0;
}