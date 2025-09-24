#include<stdio.h>
int main(){
int n,i,found=0,key;
printf("enter the number of elements:");
scanf("%d",&n);
int arr[n];
printf("enter %d elements:",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter the element to search:");
scanf("%d",&key);
for(i=0;i<n;i++){
if(arr[i]==key){
found=1;
break;
}
}
if(found){
printf("element %d found at position %d\n",key,i+1);
}else{
printf("element %d not found\n",key);
}
return 0;
}
