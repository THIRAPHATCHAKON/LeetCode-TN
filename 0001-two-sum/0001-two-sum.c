/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
        struct hashTable {
        int id;
        int value;
        UT_hash_handle hh;
    } *table = NULL, *itemcurrent;

    for(int i = 0; i < numsSize ; i++){
        HASH_FIND_INT(table, &nums[i], itemcurrent);
        if(itemcurrent){
            int* result = malloc(sizeof(int) * 2);
            result[0] = itemcurrent->value;
            result[1] = i;
            *returnSize = 2;
            return result;
        }
        itemcurrent = malloc(sizeof(struct hashTable));
        itemcurrent->id = target - nums[i];
        itemcurrent->value = i;
        HASH_ADD_INT(table, id, itemcurrent);
        }
    *returnSize = 0;
    return malloc(sizeof(int) * 0);
}