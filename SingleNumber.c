#include<stdio.h>

int singleNumber(int *nums, int numsSize){
    int target;
    for(int i = 0; i< numsSize; i++){
        int count = 0;
        for(int x = 0; x<numsSize; x++)
        {
            if(nums[i] == nums[x])
            {
                count++;
            }
        }
        if(count == 1){
            target = nums[i];
        }
    }       
    return target;
}

int main()
{
    int arr[] = {2,2,1};
    int size = 3;
    int res = singleNumber(arr, size);
    printf("%d", res);
}
