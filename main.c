/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){    
    
    unsigned int sum = 0;    
    *returnSize = 2;
    int* results = (int*)malloc(*returnSize * sizeof(int));        

    for (int i = 0; i < numsSize; i++){
        for (int j = i + 1; j < numsSize; j++){            
            sum = nums[i] + nums[j];                         
            if (sum == target){
                results[0] = i;
                results[1] = j;
                goto targetOK;
            }
        }        
    }
    
targetOK:    
    return results;
}
