#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for(int i = 1;i >= 0;i--){
        for(int j = 1;j >= a;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}