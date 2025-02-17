#include <stdio.h>

int main(){
    int a;
    scanf("%d",&num);
    if (num <= 1) {
        printf("Not Prime");
    } 
    for (int i = 2;i <= num/2; i++){
        if (num % i == 0){
            printf("Not Prime");
        }
        else {
            printf("Prime");
        }
    }
    return 0;
}