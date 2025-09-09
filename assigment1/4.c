#include <stdio.h>

int main(){
    int a ;
    int b;
    int c;
    printf("Enter 1st Value:\t");
    scanf("%d",&a);
    printf("Enter 2nd Value:\t");
    scanf("%d",&b);
    printf("Enter 3rd Value:\t");
    scanf("%d",&c);

    if(a>b && a>c)
        printf("1st Value Entered (a) is greater");
    else if(b>c)
        printf("2nd Value Entered (b) is greater");
    else
        printf("3rd value entered (c) is greater");

    return 0;

    
}