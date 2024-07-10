class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";

        // Prefix is whole first string
        std::string prefix = strs[0];

        
        for (int i = 1; i < strs.size(); ++i) {
           
            while (strs[i].find(prefix) != 0) {
                // Reduce the prefix each iteration
                prefix = prefix.substr(0, prefix.size() - 1);

                // No prefix exists
                if (prefix.empty()) return "";
            }
        }

        return prefix;
    }
};