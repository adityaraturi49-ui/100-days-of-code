#include<stdio.h>
int main(){
int n,i,even=0,odd=0;
printf("enter the number of elements:");
scanf("%d",&n);
int arr[n];
printf("enter %d elements:",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
if(arr[i]%2==0){
even++;
}else{
odd++;
}
}
printf("even numbers=%d\n",even);
printf("odd numbers=%d\n",odd);
return 0;
}
