class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //Just do an initial for loop to put everything in its place
        int nonZero = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[nonZero++] = nums[i];
            }
        }
        //fill in the zeros! 
        for (int j = nonZero; j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
};