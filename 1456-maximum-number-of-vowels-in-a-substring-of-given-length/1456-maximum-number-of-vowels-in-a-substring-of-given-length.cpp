class Solution {
public:
    int maxVowels(string s, int k) {
        //I think it'll be a sliding window problem
        string vowels = "aeiou";
        int maxSub = 0;
        int currSub = 0;
        for (int i = 0; i < s.size(); i++) {
            if (vowels.find(s[i]) != std::string::npos) {
                currSub++;
            }
            if ( i >= k) {
                if (vowels.find(s[i-k]) != std::string::npos) {
                    currSub--;
                }
            }
            if (i >= k - 1) {
                maxSub = max(maxSub, currSub);
            }
        }
        return maxSub;
    }
};