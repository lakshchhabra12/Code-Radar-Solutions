#include <stdio.h>

int main() {
    int a,b,c,f;
    scanf("%d %d %d",&a,&b,&c);
    f = float((a + b + c)/3);
    printf("Average: %.2f",f);
    return 0;
}