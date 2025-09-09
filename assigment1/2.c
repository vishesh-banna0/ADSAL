#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    printf("a was 10 before but now it is: %d\n",a);
    printf("b was 20 before but now it is: %d\n",b);

    return 0;

}