int minimumSwaps(int* nums, int numsSize) {
     int z = 0, c = 0;
    for(int i = 0; i < numsSize; i++){
        if(!nums[i]) z++;
    }

    for(int i = numsSize - z; i < numsSize; i++){
        if(nums[i]) c++;
    }
    return c;

}
