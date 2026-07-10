#include<stdio.h>
#include<limits.h>
int majorityElement(int* nums, int numsSize)
{
    int times = numsSize/2;
    int tempNum = INT_MIN;
    int majorityElement;
    int count = 0;
    for(int i = 0; i<numsSize; i++){
        if(nums[i] != tempNum){
            tempNum = nums[i];
            count = 0;
            for(int x = 0; x<numsSize; x++){
                if(tempNum == nums[x]){
                    count++;
                }
            }
            if(count > times){
                return tempNum;
            }
            else{
                count = 0;
            }
        }
        
    }
    return tempNum;
}
int main(){
    int nums[] = {6,5,5};
    int size = 3;
    int res = majorityElement(nums, size);
    printf("Output: %d", res);
}
