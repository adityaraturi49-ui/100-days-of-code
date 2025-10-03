#include<stdio.h>
int main(){
char str[100];
int count=0;
printf("enter a string: ");
gets(str);
while(str[count]!='\0'){
count++;
}
printf("number of characters in the string: %d\n",count);
return 0;
}
