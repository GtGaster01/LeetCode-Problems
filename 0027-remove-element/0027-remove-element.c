int removeElement(int* nums, int numsSize, int val) {
    int k=numsSize;
    int i=0;
    while(i<k){
        if(nums[i]==val){
            nums[i]=nums[k-1];
            k--;
        }
        else{
            i++;
        }
    }
    return k;
}