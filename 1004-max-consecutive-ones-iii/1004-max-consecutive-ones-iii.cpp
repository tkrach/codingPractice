class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        //Sliding window problem
        int left = 0, maxLen = 0, zeroCount = 0;

        for (int right = 0; right < nums.size(); right++) {
            if(nums[right] == 0) {
                zeroCount++;
            }

            //We can only have at most k zeros within the subarray
            while (zeroCount > k) {
                if (nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};