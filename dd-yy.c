#include<stdio.h>
int main(){
    int d,m,y;
    scanf("%d/%d/%d",&d,&m,&y);
    if(m==4)printf("%02d-Apr-%04d",d,y);
    else printf("Month not 04");
    return 0;
}
