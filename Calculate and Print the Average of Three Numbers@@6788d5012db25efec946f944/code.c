#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float f;
    f = (a + b + c)/3.0;
    printf("Average: %.2f",f);
    return 0;
}