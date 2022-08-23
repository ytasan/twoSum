/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){    
    
    unsigned int sum = 0;
    
    for (unsigned int i = 0; i<numsSize; i++){
        printf("numbers = %d\n", nums[i]);
    }
    printf("----\n");
    printf("numsSize = %d\n", numsSize);
    printf("target = %d\n", target);
    printf("returnSize = %d\n", *returnSize);
    
    for (unsigned int i = 0; i < numsSize; i++){
        for (unsigned int j = i + 1; j < numsSize; j++){
            printf("i = %d j = %d\n", i, j);
            sum = nums[i] + nums[j];             
            printf("sum = %d\n", sum);
        }        
    }
    
    return returnSize;
}
