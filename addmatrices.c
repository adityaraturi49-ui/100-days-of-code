#include<stdio.h>

int main(){
int m,n;
printf("enter number of rows and columns:");
scanf("%d %d",&m,&n);
int a[m][n],b[m][n],sum[m][n];
printf("enter elements of first matrix:\n");
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}
printf("enter elements of second matrix:\n");
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
scanf("%d",&b[i][j]);
}
}
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
sum[i][j]=a[i][j]+b[i][j];
}
}
printf("sum of the two matrices:\n");
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
printf("%d ",sum[i][j]);
}
printf("\n");
}
return 0;
}
