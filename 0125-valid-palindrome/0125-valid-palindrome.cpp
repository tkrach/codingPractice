class Solution {
public:
    bool isPalindrome(string s) {
        // 2 pointer, lets do this! 
        string filteredString;
        
        // Build the new string with only alphanumeric characters in lowercase
        for (char c : s) {
            if (std::isalnum(c)) {
                filteredString += std::tolower(c);
            }
        }
        int left = 0, right = filteredString.size() - 1;
        while (left < right) {
            // Fail fast!
            if (filteredString[left] != filteredString[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;

    }
};