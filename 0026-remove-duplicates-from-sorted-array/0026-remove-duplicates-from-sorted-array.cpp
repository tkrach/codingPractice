class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Lets use a 2 pointer approach here
        int j = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                j++;
            }
        }
        //Here j represents the amount of unique elements
        return j;
    }
};