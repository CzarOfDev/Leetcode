#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int removeDuplicates(int* nums, int numsSize){
    int *arr = NULL;
    int arrSize = 0;
    int tempNum = INT_MIN;
    int arrIdx=0;
    for(int i = 0; i<numsSize; i++){
        if (tempNum != nums[i]){
            tempNum = nums[i];
            arrSize++;
            int *temp = realloc(arr, arrSize * sizeof(int));
            if(temp != NULL){
                arr = temp;
            }else{
                free(arr);
                return 1;
            }
            arr[arrIdx] = nums[i];
            arrIdx++;
        }
    }
    for(int i = 0; i<arrSize; i++){
        nums[i] = arr[i];
    }
    free(arr);
   return arrSize;
}
int main(){
    int nums[] = {0,0,1,1,1,2,2,3,3,3,4,4};
    int arrSize = removeDuplicates(nums,12);
    for(int i = 0; i<arrSize; i++){
        printf("%d, ", nums[i]);
    }
}
