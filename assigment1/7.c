#include<stdio.h>

int main(){
    int n = 0;
    printf("Enter Value of n:\t");
    scanf("%d", &n);
    int arr[n];
    arr[0] = 1;
    arr[1] = 1;

    for(int i = 0;i < n;i++){
        if(i>1){
            arr[i] = arr[i-1] + arr[i-2];
            printf("%d ",arr[i]);
        }
        else{
            printf("%d",arr[i]);
        }



    }
    return 0;
}