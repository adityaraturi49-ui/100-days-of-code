#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100], temp;
    int i, start = 0, end;
    printf("enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for(i = 0; str[i] != '\0'; i++)
        str[i] = toupper(str[i]);
    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            while (start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
        if (str[i] == '\0')
            break;
    }
    printf("Reversed words: %s", str);
    return 0;
}
