class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
       std::unordered_map<int,int> freq;
       int opCount = 0;
       for (int num: nums) {
            freq[num]++;
       }
       for (int num: nums) {
            if (freq[num] > 0 && freq[k-num] > 0) {
                if (num == k-num && freq[num] <2) {
                    continue;
                }
                opCount++;
                freq[num]--;
                freq[k - num]--;
            }
       } 
       return opCount;
    }
};