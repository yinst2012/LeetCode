class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int a = nums1.size(), b = nums2.size();
        vector<int> T(a+b);
        int m, i = 0, j = 0, index = 0;
        double res = 0.0;
        while(i < a && j < b){
            if(nums1[i] < nums2[j]){
                T[index ++] = nums1[i ++];
            }
            else T[index ++] = nums2[j ++];
        }
        while(j < b) T[index ++] = nums2[j ++];
        while(i < a) T[index ++] = nums1[i ++];
        m = (a + b) / 2;
        if((a+b) % 2)
            res = (double)T[m];
        else res = (double)(T[m] + T[m-1]) / 2;
        return res;
    }
};
