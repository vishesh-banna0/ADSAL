#include<stdio.h>

int main(){
    int token = 0;
    printf("Enter your token number: ");
    scanf("%d", &token);
    if(token % 2 != 0)
        printf("It is an odd token number\n");

    else
        printf("It is an even number\n");
    
    return 0;
}