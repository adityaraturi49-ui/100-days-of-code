#include<stdio.h>
int main(){
int r,c,i,j,sum=0;
printf("enter number of rows:");
scanf("%d",&r);
printf("enter number of columns:");
scanf("%d",&c);
int arr[r][c];
printf("enter elements of the matrix:\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&arr[i][j]);
sum+=arr[i][j];
}
}
printf("sum of all elements = %d\n",sum);
return 0;
}
