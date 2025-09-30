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

    int diagonal[n], count = 0;
    for (int i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i];
    }

    int distinct = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diagonal[i] == diagonal[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
        printf("diagonal elements are distinct.\n");
    else
        printf("diagonal elements are not distinct.\n");

    return 0;
}
