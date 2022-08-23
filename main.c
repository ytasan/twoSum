/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){    
    
    unsigned int sum = 0;    
    *returnSize = 2;
    int* asd = (int*)malloc(*returnSize * sizeof(int));
        
    
    // for (unsigned int i = 0; i<numsSize; i++){
    //     printf("numbers = %d\n", nums[i]);
    // }
    // printf("----\n");
    // printf("numsSize = %d\n", numsSize);
    // printf("target = %d\n", target);
    // printf("returnSize = %d\n", *returnSize);
    
    for (int i = 0; i < numsSize; i++){
        for (int j = i + 1; j < numsSize; j++){
            // printf("i = %d, j = %d\n", i, j);
            sum = nums[i] + nums[j];             
            // printf("sum = %d\n", sum);
            if (sum == target){
                asd[0] = i;
                asd[1] = j;
                goto targetOK;
            }
        }        
    }
    
targetOK:
    // printf("sum = %d\n", sum);
    // printf("[%d,%d]", result[0], result[1]);
    return asd;
}
