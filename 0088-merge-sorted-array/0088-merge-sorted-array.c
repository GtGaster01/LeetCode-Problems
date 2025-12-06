void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    m--;
    n--;
    int k=nums1Size-1;
    while(m>=0 && n>=0){
        if(m>=0 && nums1[m]<nums2[n]){
            nums1[k]=nums2[n];
            k--;
            n--;
        }else{
            nums1[k]=nums1[m];
            m--;
            k--;
        }
    }
    while(n>=0){
        nums1[k]=nums2[n];
        n--;
        k--;
    }
}