class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        //Map Problem!
        std::unordered_map<int, int> countMap;
        int majorityCount = nums.size() / 2;
        
        for (int num : nums) {
            countMap[num]++;
            if (countMap[num] > majorityCount) {
                return num;
            }
        }
        
        // the problem guarantees that the majority element always exists,
        // we do not need to handle the case where no majority element is found.
        return -1; // This line should theoretically never be reached.
    }
};