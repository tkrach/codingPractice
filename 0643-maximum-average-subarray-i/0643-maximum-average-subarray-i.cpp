class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //Probably a sliding window problem here
        double average = 0;
        //compute the first k values first!
        for (int i = 0; i < k; i++) {
            average += nums[i];
        }
        double sum = average;
        for (int i = k; i < nums.size(); i++) {
            sum = sum + nums[i] - nums[i - k];
            average = max(average, sum);
        }
        return average/k;
    }
};