#include<stdio.h>
#include<stdlib.h>
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int idx = 0;
    int *res = malloc(2 * sizeof(int));
    for(int i = 0; i<numsSize; i++){
        int num = nums[i];
        for(int x = 0; x< numsSize; x++){
            if(num+nums[x] == target && i!=x ){
                res[0] = x;
                res[1] = i;
                break;
            }
            idx++;
        }
    }
    *returnSize = 2;
    return res;
    
}
int main(){
    int size;
    printf("Size of array: ");
    scanf("%d", &size);
    int target;
    printf("Target: ");
    scanf("%d", &target);
    int *nums = malloc(size*sizeof(int));
    for (int i=0; i<size;i++){
        int num;
        printf("%d.Number: ", i);
        scanf("%d", &num);
        nums[i] = num;
    }
    int resSize;
    int *result = twoSum(nums,size,target,&resSize);
    printf("[");
    for(int z = 0; z<resSize; z++){
        printf("%d, ", result[z]);
    }
    printf("]");
    return 0;
}
