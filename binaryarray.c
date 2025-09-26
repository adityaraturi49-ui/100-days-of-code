#include <stdio.h>
int binarysearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, key;
    printf("enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter element to search: ");
    scanf("%d", &key);
    int result = binarysearch(arr, n, key);
    if (result != -1)
        printf("element found at index %d\n", result);
    else
        printf("element not found\n");
    return 0;
}
