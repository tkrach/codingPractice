class Solution {
public:
    int strStr(string haystack, string needle) {
        // Just use built in find function lol 
        size_t found = haystack.find(needle);
        return found; 
    }
};