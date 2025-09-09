#include<stdio.h>

int fact(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n * fact(n - 1);
}

int main(){
    int n;
    int ans = 1;
    printf("Enter value of n: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        ans = fact(n);
        printf("Factorial of %d is %d\n", n, ans);
    }
    return 0;
}