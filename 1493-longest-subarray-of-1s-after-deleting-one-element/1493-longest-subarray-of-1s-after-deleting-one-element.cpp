class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        //Sliding window
        int left = 0, right;
        //We can change k values from 0 to 1
        int k = 1;
        for (right = 0; right < nums.size(); ++right) {
            //If we encounter a zero subtract from k 
            if (nums[right] == 0) {
                k--;
            } 
            
            if (k < 0 && nums[left++] == 0) {
                k++;
            }
        }
        return right - left - 1;
    }
};