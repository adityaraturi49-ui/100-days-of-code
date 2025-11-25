#include <stdio.h>

int main() {
    FILE *p;
    char filename[50];
    char text[200];
    printf("Enter file name: ");
    scanf("%s", filename);
    getchar(); 
    p = fopen(filename, "a");
    if (p == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    fputs(text, fp);
    fclose(fp);
    printf("Text appended successfully!\n");
    return 0;
}