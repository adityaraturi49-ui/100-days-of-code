#include<stdio.h>
int main(){
int n,i,temp;
printf("enter the number of elements:");
scanf("%d",&n);
int arr[n];
printf("enter %d elements:",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<n/2;i++){
temp=arr[i];
arr[i]=arr[n-1-i];
arr[n-1-i]=temp;
}
printf("reversed array:");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}
