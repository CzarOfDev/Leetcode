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
