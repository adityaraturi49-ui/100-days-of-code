#include<stdio.h>
int main(){
int n,i;
printf("enter number of elements:");
scanf("%d",&n);
int arr[n];
printf("enter %d elements:\n",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int largest=arr[0];
int second=-2147483648;
for(i=1;i<n;i++){
if(arr[i]>largest){
second=largest;
largest=arr[i];
}else if(arr[i]>second&&arr[i]!=largest){
second=arr[i];
}
}
if(second==-2147483648){
printf("no second largest element (all elements are equal).\n");
}else{
printf("the second largest element is %d\n",second);
}
return 0;
}
