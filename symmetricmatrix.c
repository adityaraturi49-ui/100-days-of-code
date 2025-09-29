#include<stdio.h>
int main(){
int n,flag=1;
printf("enter order of square matrix:");
scanf("%d",&n);
int a[n][n];
printf("enter elements of the matrix:\n");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(a[i][j]!=a[j][i]){
flag=0;
break;
}
}
}
if(flag==1)
printf("the matrix is symmetric\n");
else
printf("the matrix is not symmetric\n");
return 0;
}
