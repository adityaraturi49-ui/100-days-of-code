#include<stdio.h>
int main(){
int r,c,i,j;
printf("enter number of rows:");
scanf("%d",&r);
printf("enter number of columns:");
scanf("%d",&c);
int arr[r][c];
printf("enter elements of the matrix:\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&arr[i][c]);
}
}
printf("the matrix is:\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}
return 0;
}
