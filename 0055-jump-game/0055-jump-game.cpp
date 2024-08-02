
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int furthest = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            // If the current index is beyond the furthest reachable point, return false
            if (i > furthest) {
                return false;
            }
            // Update the furthest reachable point
            furthest = max(furthest, i + nums[i]);
        }
        
        return true;
    }
};
