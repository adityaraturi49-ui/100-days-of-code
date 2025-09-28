 #include<stdio.h>
int main(){
int n,k,i;
printf("enter number of elements:");
scanf("%d",&n);
int arr[n];
printf("enter %d elements:\n",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter k:");
scanf("%d",&k);
k=k%n;
int temp[n];
for(i=0;i<n;i++){
temp[(i+k)%n]=arr[i];
}
printf("array after rotation:\n");
for(i=0;i<n;i++){
printf("%d ",temp[i]);
}
return 0;
}
