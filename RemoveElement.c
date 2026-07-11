#include<stdio.h>
#include<stdlib.h>

int removeElement(int* nums, int numsSize, int val){
    int size = 0;
    int *sortedArr = NULL;
    for(int i = 0; i<numsSize; i++){
        if(nums[i] != val){
            size++;
            int *temp = realloc(sortedArr, size*sizeof(int));
            if(temp != NULL)
            {
                sortedArr = temp;
                sortedArr[size - 1] = nums[i];
            }
            else{
                free(sortedArr);
                return -1;
            }
        }
    }
    for(int i = 0; i<size; i++){
        nums[i] = sortedArr[i];
    }
    free(sortedArr);
    return size;
}

int main()
{
    int nums[] = {0,1,2,2,3,0,4,2};
    int val = 2;
    int size = 8;
    int res = removeElement(nums,size,val);
    printf("Output: %d\n", res);
    for(int i = 0; i<size; i++){
        printf("%d", nums[i] );
    }
    return 0;
}
