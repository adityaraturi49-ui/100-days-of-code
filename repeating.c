#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int freq[26]={0};
    int i;

    printf("enter a string: ");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';

    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a'&&str[i]<='z'){
            int index=str[i]-'a';
            freq[index]++;
            if(freq[index]==2){
                printf("first repeating lowercase alphabet: %c\n",str[i]);
                return 0;
            }
        }
    }

    printf("no repeating lowercase alphabet found.\n");
    return 0;
}
