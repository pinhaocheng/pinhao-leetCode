#include <string>
#include <algorithm> // Required for std::max
class Solution
{
public:
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k)
    {
        // Initialize the current count of vowels to 0.
        int currentVowels = 0;

        // Count the number of vowels in the first k characters.
        for (int i = 0; i < k; ++i)
        {
            currentVowels += isVowel(s[i]);
        }

        // Initialize the maximum number of vowels to the current count.
        int maxVowels = currentVowels;

        // Slide the window from k to the end of the string.
        for (int j = k; j < s.size(); ++j)
        {
            // Update the current count of vowels by adding the new character
            // and subtracting the character that is no longer in the window.
            currentVowels = currentVowels + isVowel(s[j]) - isVowel(s[j - k]);

            // Update the maximum number of vowels if the current count is greater.
            maxVowels = std::max(maxVowels, currentVowels);
        }

        return maxVowels;
    }
};