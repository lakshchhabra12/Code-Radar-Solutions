#include <stdio.h>

int main() {
    int a;
    scanf("%d %d",&a ,&b);
    if (a > 0) {
        printf("Positive\n");
    }
    else if (a < 0) {
        printf("Negative\n");
    } 
    else {
        printf("Zero\n");
    }
    return 0;
}