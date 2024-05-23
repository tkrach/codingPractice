class Solution {
public:
    bool isSubsequence(string s, string t) {
        //Alright so my approach here is that we only 
        //iterate the pointer of string s if we find the next char
        //in the subsequence, thus if we reached the end of s
        //we have found a subsequence 
        int sCount = 0;
        //Edge case handeling
        if (s.size() > t.size()) {
            return false; 
        }
        for (int i = 0; i < t.size(); i++) {
            if (s[sCount] == t[i]) {
                sCount++;
            }
        }
        return sCount == s.size();
    }
};