#include<stdio.h>

int main(){
    int a;
    printf("Enter a Number:\t");
    scanf("%d",&a);

    int rev = 0;

    while(a != 0){
        rev = (rev*10) + a%10;
        a /= 10;
    }
    printf("%d",rev);
    return 0;
}