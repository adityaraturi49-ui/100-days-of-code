#include<stdio.h>
int main(){
int n,i;
printf("enter the number of elements:");
scanf("%d",&n);
int arr[n];
printf("enter %d elements:",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int max=arr[0],min=arr[0];
for(i=1;i<n;i++){
if(arr[i]>max){
max=arr[i];
}
if(arr[i]<min){
min=arr[i];
}
}
printf("maximum element=%d\n",max);
printf("minimum element=%d\n",min);
return 0;
}
