class Solution {
public:
    int jump(vector<int>& nums) {
        int furthest = 0;
        int steps = 0;
        int currentEnd = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            // Update the furthest point we can reach
            furthest = max(furthest, i + nums[i]);

            // If we have reached the end of the current jump range, increase steps
            if (i == currentEnd) {
                steps++;
                currentEnd = furthest;

                // If the current end reaches or exceeds the last index, return the steps
                if (currentEnd >= nums.size() - 1) {
                    return steps;
                }
            }
        }

        return steps;
    }
};