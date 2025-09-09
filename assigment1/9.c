#include<stdio.h>

int main(){
    int a;
    printf("Enter a Number:\t");
    scanf("%d",&a);
    int temp = a;

    int rev = 0;

    while(a != 0){
        rev = (rev*10) + a%10;
        a /= 10;
    }
    if(temp == rev){
        printf("it is a palindrome\n");
    }
    else{
        printf("it is not a palindrome");
    }
    return 0;
}