int missingNumber(int* nums, int numsSize) {
    
    int x = 0;
    for(int i=0; i<=numsSize; i++){
        x = x ^ i;
    }
    for(int i =0; i<numsSize; i++){
        x = x ^ nums[i];
    }
    return x;
}
