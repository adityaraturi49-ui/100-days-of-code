#include <stdio.h>
int main() {
    FILE *fp;
    char name[50];
    int age;
    printf("enter name: ");
    fgets(name, 50, stdin);
    printf("enter age: ");
    scanf("%d", &age);
    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("cannot open file\n");
        return 1;
    }
    fprintf(fp, "name: %s", name);
    fprintf(fp, "age: %d\n", age);
    fclose(fp);
    printf("data saved\n");
    return 0;
}
