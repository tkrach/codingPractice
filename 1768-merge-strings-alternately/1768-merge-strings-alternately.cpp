class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        // Get the smaller size among word1 and word2
        size_t smaller = std::min(word1.size(), word2.size());
        
        std::string word3;
        word3.reserve(word1.size() + word2.size()); // Reserve space for word3 to avoid reallocations
        
        // Merge characters alternately
        for (size_t i = 0; i < smaller; ++i) {
            word3.push_back(word1[i]);
            word3.push_back(word2[i]);
        }
        
        // Append the remaining characters from the longer string
        word3 += std::max(word1.substr(smaller), word2.substr(smaller));
        
        return word3;
    }
};