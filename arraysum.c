#include<stdio.h>
int main(){
int n,i,sum=0,arr[100];
printf("enter number of elements:");
scanf("%d",&n);
printf("enter elements:");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
sum+=arr[i];
}
printf("sum of elements:%d",sum);
return 0;
}
