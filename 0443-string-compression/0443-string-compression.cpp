class Solution {
public:
    int compress(std::vector<char>& chars) {
        int n = chars.size();
        //Fail FAST
        if (n <= 1) return n; 
        
        int writeIndex = 0; 
        char currentChar = chars[0]; 
        int count = 1; 
        
        for (int i = 1; i < n; ++i) {
            if (chars[i] == currentChar) {
                // If current character is same as previous one, increment count
                ++count;
            } else {
                // If current character is different, write compressed character
                chars[writeIndex++] = currentChar; 
                
                // If count > 1, write its digits
                if (count > 1) {
                    std::string countStr = std::to_string(count); 
                    for (char digit : countStr) {
                        chars[writeIndex++] = digit; 
                    }
                }
                
                // Update currentChar and reset count for the new character
                currentChar = chars[i];
                count = 1;
            }
        }
        
        // Write the last character and its count (if > 1)
        chars[writeIndex++] = currentChar;
        if (count > 1) {
            std::string countStr = std::to_string(count);
            for (char digit : countStr) {
                chars[writeIndex++] = digit;
            }
        }
        
        // Return the new length of the array
        return writeIndex;
    }
};