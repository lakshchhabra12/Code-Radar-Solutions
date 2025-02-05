#include <stdio.h>

int main() {
    int a,b;
    char ch;
    scanf("%d %d %c",&a ,&b ,&ch);
    if (ch == '+') {
        c = a + b;
        printf("%d",c);
    } else if (ch == '-' ) {
        c = a - b;
        printf("%d",c);
    } else if (ch == '*' ) {
        c = a * b;
        printf("%d",c);
    } else if (ch == '/' ) {
        c = a / b;
        printf("%d",c);
    } else {
        printf("error");
    }
    return 0;
}