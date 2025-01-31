#include <stdio.h>
#include <ctype.h>

int main() {
    int ch;
    scanf("%c",&ch);
    if (isdigit(ch)) {
        printf("Digit");
    } else if (isalpha(ch)) {
        ch = islower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel");
        } else {
            printf("Constant");
        }
        else {
            printf("Special Character");
        }
    }
    return 0;
}