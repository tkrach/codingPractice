class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //2 Pointer problem lets go
        int nonZero = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[nonZero++] = nums[i];
            }
        }
        for (int j = nonZero; j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
};