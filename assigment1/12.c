#include<stdio.h>

int main(){
    int n;
    printf("Enter a Number:\t");
    scanf("%d",&n);

    for (int i = 2; i < n/2; i++)
    {
        if(n%i == 0){
            printf("Not a Prime");
            return 0;
        }
    }
    printf("It's a Prime");


    
    return 0;
}