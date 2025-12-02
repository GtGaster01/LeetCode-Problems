/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int k=digitsSize-1;
    *returnSize=digitsSize;
    if(digits[k]!=9){
        digits[k]+=1;
        
        return digits;
    }
    digits[k]=0;
    k--;
    int carry=1;
    while(carry==1&&k>=0){
        if(digits[k]==9){
            digits[k]=0;
            k--;
        }else{
            digits[k]+=1;
            carry=0;
        }
    }
    if(carry!=1){
        return digits;
    }
    (*returnSize)++;
    int *newNums=calloc((*returnSize),sizeof(int));
    newNums[0]=1;
    return newNums;
}