#include <stdio.h>
int main() {
    int n;
    printf("enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("enter elements of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("sum of main diagonal elements = %d\n", sum);

    return 0;
}
