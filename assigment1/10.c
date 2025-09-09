#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int len = 0;

    while(a != 0){
        a /= 10;
        len++;

    }
    printf("%d",len);
    return 0;
}