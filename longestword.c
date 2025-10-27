#include <stdio.h>
#include <string.h>
int main() {
    char line[1000];
    char *word;
    char longest[1000] = "";
    printf("enter a sentence:\n");
    if (fgets(line, sizeof(line), stdin) == NULL) return 0;
    line[strcspn(line, "\n")] = '\0';
    word = strtok(line, " \t\n");
    while (word != NULL) {
        if (strlen(word) > strlen(longest)) {
            strcpy(longest, word);
        }
        word = strtok(NULL, " \t\n");
    }
    if (strlen(longest) > 0)
        printf("longest word: %s\nlength: %zu\n", longest, strlen(longest));
    else
        printf("no words found.\n");
    return 0;
}
