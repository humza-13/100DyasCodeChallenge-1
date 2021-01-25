void insert(int *keys, int *values, int key, int value) {
    int index = key;
    
    while (values[index]) {
        index = index + 1;
    }
    
    keys[index] = key;
    values[index] = value;
}

int search(int *keys, int *values, int key) {
    int index = key;
    
    while (values[index]) {
        if (keys[index] == key) {
            return values[index];
        }
        index = index + 1;
    }
    return 0;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int keys[500];
    int values[500] = {0};
    
    for (int i = 0; i < numsSize; i++) {
        int complements = target - nums[i];
        int value = search(keys, values, complements);
        if (value) {
            int *indices = (int *) malloc(sizeof(int) * 2);
            indices[0] = value - 1;
            indices[1] = i;
            return indices;
        }
        insert(keys, values, nums[i], i + 1);
    }
    return NULL;
}

