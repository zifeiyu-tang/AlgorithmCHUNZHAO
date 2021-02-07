nt majorityElement(int* nums, int numsSize){
    int num = nums[0];
    int count = 1;
    for (int i = 1; i < numsSize; i++) {
        if (count == 0) num = nums[i];
        count = num == nums[i] ? ++count : --count;
    }
    return num;
}
