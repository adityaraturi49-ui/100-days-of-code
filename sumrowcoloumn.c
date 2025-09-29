#include<stdio.h>
int main(){
int m,n;
printf("enter number of rows and columns:");
scanf("%d %d",&m,&n);
int matrix[m][n],rowsum[m];
printf("enter elements of the matrix:\n");
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
scanf("%d",&matrix[i][j]);
}
}
for(int i=0;i<m;i++){
rowsum[i]=0;
for(int j=0;j<n;j++){
rowsum[i]+=matrix[i][j];
}
}
printf("sum of each row:\n");
for(int i=0;i<m;i++){
printf("row %d=%d\n",i+1,rowsum[i]);
}
return 0;
}
