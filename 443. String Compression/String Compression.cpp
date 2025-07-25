class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i = 0; // Pointer to read characters
        int writeIndex = 0;

        while(i<chars.size()) {
            char currentChar = chars[i];
            int j = i; // Pointer to count occurrences of currentChar

            // Count the number of occurences of the current character
            while(j<chars.size() && chars[j] == currentChar) {
                j++;
            }

            // Write the character to the writeIndex
            chars[writeIndex] = currentChar;
            writeIndex++; // Move the write pointer

            // Count of the current character
            int count = j - i; 

            // If count is more than 1, we need to write the count as well
            if(count > 1) {
                // Convert count to string and write each digit
                std::string s_count = std::to_string(count);

                // Loop through each character ('1', then '2') of the string "12"
                for (char digit : s_count) {
                    chars[writeIndex] = digit;
                    writeIndex++; // Move the write pointer for each digit we place
                }
            }
            i = j; // Move to the next new character
        }    
        return writeIndex;
    }
};