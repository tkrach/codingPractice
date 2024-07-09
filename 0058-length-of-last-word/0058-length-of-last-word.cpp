class Solution {
public:
    int lengthOfLastWord(string s) {
        // This is basically just a test of string manipulation in c++ 
        s.erase(s.find_last_not_of(' ') + 1);
        size_t last_non_space = s.find_last_not_of(' ');
        size_t last_space = s.rfind(' ', last_non_space);
        std::string last_word = s.substr(last_space + 1);
        return last_word.size();
    }
};