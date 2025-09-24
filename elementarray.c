#include<stdio.h>
int main(){
int n,i,pos=0,neg=0,zero=0;
printf("enter the number of elements:");
scanf("%d",&n);
int arr[n];
printf("enter %d elements:",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
if(arr[i]>0){
pos++;
}else if(arr[i]<0){
neg++;
}else{
zero++;
}
}
printf("positive numbers=%d\n",pos);
printf("negative numbers=%d\n",neg);
printf("zero elements=%d\n",zero);
return 0;
}
