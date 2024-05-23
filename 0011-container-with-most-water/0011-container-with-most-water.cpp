class Solution {
public:
    int maxArea(vector<int>& height) {
        /*A CLASSIC leetcode problem lol
        My approach will be to keep track of a max value 
        then update this value if its over the max as we move
        inward using 2 pointers */
        int currMax = 0;
        int startPtr = 0;
        int endPtr = height.size() - 1;
        while (startPtr < endPtr) {
            currMax = max(currMax, min(height[startPtr], height[endPtr]) * (endPtr - startPtr));
            if (height[startPtr] < height[endPtr]) {
                startPtr++;
            }
            else {
                endPtr--;
            }
        }
        return currMax; 

    }
};