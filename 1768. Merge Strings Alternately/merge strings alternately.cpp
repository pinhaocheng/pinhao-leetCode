class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        // 1. Create the string to build answer
        std::string result = "";
        result.reserve(word1.size() + word2.size());

        // 2. Initialize counters (or pointers)
        int i = 0;
        int j = 0;

        // 3. Loop logic
        while (i < word1.size() || j < word2.size())
        {
            // Add from word1 if possible
            if (i < word1.size())
            {
                result += word1[i++];
            }
            // Add from word2 if possible
            if (j < word2.size())
            {
                result += word2[j++];
            }
        }

        // 4. Return the final answer
        return result;
    }
};