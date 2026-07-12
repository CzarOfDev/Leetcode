int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int resSize = 0;
    int *result = NULL;

    for (int i = 0; i < nums1Size; i++) {
        int num = nums1[i];
        bool foundInNums2 = false;
        for (int x = 0; x < nums2Size; x++) {
            if (num == nums2[x]) {
                foundInNums2 = true;
                break;
            }
        }
        if (!foundInNums2) {
            continue;           
        }

        bool alreadyAdded = false;
        for (int y = 0; y < resSize; y++) {
            if (result[y] == num) {
                alreadyAdded = true;
                break;
            }
        }
        if (alreadyAdded) {
            continue;             
        }
        resSize++;
        int *temp = realloc(result, resSize * sizeof(int));
        if (temp == NULL) {
            free(result);
            *returnSize = 0;
            return NULL;
        }
        result = temp;
        result[resSize - 1] = num;
    }

    *returnSize = resSize;
    return result;
}
