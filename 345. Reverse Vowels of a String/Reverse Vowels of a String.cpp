class Solution
{

public:
    bool isVowel(char c)
    {
        // The find() function returns a special value string::npos
        // if the character is not found.
        return string("aeiouAEIOU").find(c) != std::string::npos;
    }

    /*
    //second method
    bool isVowel(char c) {
        // Using tolower simplifies the switch by halving the cases.
        c = tolower(c);
        switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                return true;
            default:
                return false;
        }
    }
    */

    string reverseVowels(string s)
    {
        int left = 0;
        int right = s.length() - 1;

        while (left < right)
        {
            // 1. Move 'left' forward until it points to a vowel.
            // Make sure to also check left < right here to prevent crossing.
            while (left < right && !isVowel(s[left]))
            {
                left++;
            }

            // 2. Move 'right' backward until it points to a vowel.
            // Again, check left < right.
            while (left < right && !isVowel(s[right]))
            {
                right--;
            }

            // 3. If the pointers haven't crossed, swap and move them.
            if (left < right)
            {
                std::swap(s[left], s[right]);
                // Move to the next positions to continue the search.
                left++;
                right--;
            }
        }

        return s;
    }
};