#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isPalindrome(int x){
    if(x<0){
        return false;
    }
    if(x<10){
        return true;
    }
    int size = 0;
    int *arr = NULL;
    while(x>0){
        size++;
        int *temp = realloc(arr, size*sizeof(int));
        if(temp != NULL){
            arr = temp;
        }else{
            free(arr);
            return false;
        }
        arr[size-1] = x%10;
        x /= 10;
    }
    int frontIdx = 0;
    int backIdx = size - 1;
    while(frontIdx < backIdx){
        if(arr[backIdx] != arr[frontIdx]){
            return false;
        }
        frontIdx++;
        backIdx = backIdx - 1;
    }
    return true;
}
int main(){
    printf("Input: ");
    int x;
    scanf("%d",&x);
    bool result = isPalindrome(x);
    if (result == true){
        printf("Output: true");
    }else{
        printf("Output: false");
    }
    return 0;
}
