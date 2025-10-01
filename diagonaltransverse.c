#include <stdio.h>
int main() {
    int n,m;
    printf("enter rows and columns: ");
    scanf("%d %d",&n,&m);

    int a[n][m];
    printf("enter matrix elements:\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("diagonal traversal:\n");
    for(int d=0;d<n+m-1;d++) {
        for(int i=0;i<n;i++) {
            int j=d-i;
            if(j>=0 && j<m) {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
