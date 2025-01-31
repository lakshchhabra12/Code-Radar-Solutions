#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a == b && b == c) {
        printf("Equilateral");
    } else if (a == b && c > a && c > b) {
        printf("Ispsceles");
    } else {
        printf("Scalene");
    }
    return 0;
}