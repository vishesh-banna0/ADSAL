#include<stdio.h>

int main(){
    int arr[10] = {1,2,3,66,92,5,4,75,56,66};
    int max = -1;

    int arr_len = (int)(sizeof(arr)/sizeof(int));
    for(int i = 0; i < arr_len; i++){
        max = (arr[i]>max)?arr[i]:max;

    }
    printf("maximum: %d",max);
    return 0;
}