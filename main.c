/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){    
    
    for (unsigned int i = 0; i<numsSize; i++){
        printf("numbers = %d\n", nums[i]);
    }
    printf("----\n");
    printf("numsSize = %d\n", numsSize);
    printf("target = %d\n", target);
    printf("returnSize = %d\n", *returnSize);
    
    return returnSize;
}
