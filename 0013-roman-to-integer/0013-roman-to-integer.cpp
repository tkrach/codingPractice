class Solution {
public:
    int romanToInt(string s) {
            std::unordered_map<char, int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int total = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        // Get the value of the current symbol
        int value = roman[s[i]];

        // Check if the next symbol exists and if its value is greater than the current symbol's value
        if (i + 1 < n && roman[s[i + 1]] > value) {
            // Subtract the current value
            total -= value;
        } else {
            // Add the current value
            total += value;
        }
    }

    return total;
    }
};