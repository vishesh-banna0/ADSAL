#include<stdio.h>

void calc(float a, float b){
    char ch;
    printf("Enter operation of your choice like +,-,*,/:\n");
    scanf(" %c", &ch);
    switch (ch)
    {
    case '+':
        printf("%f",a+b);
        break;
    case '-':
        printf("%f",a-b);
        break;
    case '*':
        printf("%f", a*b);
        break;
    case '/':
        printf("%f",a/b);
        break;
    
    default:
        printf("invalid input");
        break;
    }
    return 0;
}
void main(){
    float a;
    float b;
    printf("Enter two numbers a and b:\t");
    scanf("%f",&a);
    scanf("%f",&b);
    calc(a,b);
    
}   
