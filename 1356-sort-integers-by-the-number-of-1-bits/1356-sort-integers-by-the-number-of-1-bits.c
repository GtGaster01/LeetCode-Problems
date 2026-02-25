/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int get_bits(int n) {
    return __builtin_popcount(n);
}


int* sortByBits(int* arr, int arrSize, int* returnSize) {
    int* result = (int*)malloc(arrSize * sizeof(int));
    memcpy(result, arr, arrSize * sizeof(int));
    *returnSize = arrSize;

    for (int i = 0; i < arrSize - 1; i++) {
        for (int j = 0; j < arrSize - i - 1; j++) {
            int cntA = get_bits(result[j]);
            int cntB = get_bits(result[j + 1]);
            if (cntA > cntB || (cntA == cntB && result[j] > result[j + 1])) {
                int temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }
    return result;
}