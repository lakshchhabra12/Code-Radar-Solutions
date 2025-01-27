#include <stdio.h>
int main() {
    float a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float f;
    f = (a + b + c)/3;
    printf("Average: %.2f",f);
    return 0;
}