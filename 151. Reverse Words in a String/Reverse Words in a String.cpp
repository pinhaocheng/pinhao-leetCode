class Solution {
public:
    string reverseWords(string s) {
        std::vector<std::string> words;
        std::stringstream ss(s);
        std::string word;

        // Split the string into words
        while (ss >> word) {
            words.push_back(word); // Add the successfully extracted word to the vector
        }

        std::string result = "";
        for (int i = words.size() - 1; i >= 0; --i) {
            result += words[i];
            result += " "; 
        }

        if (!result.empty()) {
            result.pop_back();
        }

        return result;
    }
};