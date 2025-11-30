int searchInsert(int* nums, int numsSize, int target) {
    int low=0; 
    int high=numsSize-1;
    int mid;
    if(nums[low]>target) return low;
    if(nums[high]<target) return high+1;
    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]==target) return mid;
        if(target<nums[mid]) high=mid-1;
        else low=mid+1;
    }
    return low;

}