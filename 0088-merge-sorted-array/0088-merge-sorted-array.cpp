class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //nums1 pointer
        int i = m - 1;
        //nums2 pointer
        int j = n - 1;
        //Very ened of the array
        int k = m + n - 1;
        while (j >= 0) {
            //If nums1 element is larger, we put it at the end and decrement
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            }
            //Else nums2 is bigger so we put that at the end and decrement
            else {
                nums1[k--] = nums2[j--];
            }
        }
    }   
};