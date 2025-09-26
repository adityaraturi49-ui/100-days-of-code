#include <stdio.h>

int main() {
    int n, x, i, j;
    printf("enter size of array: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("enter elements in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter element to insert: ");
    scanf("%d", &x);

    j = n - 1;
    while (j >= 0 && arr[j] > x) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = x;
    n++;

    printf("array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
