class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        // check 1: both str must have same length
        if (word1.size() != word2.size())
        {
            return false;
        }

        // check 2: both str must contain same set of char
        std::vector<int> freq1(26, 0);
        std::vector<int> freq2(26, 0);

        for (char c : word1)
        {
            freq1[c - 'a']++;
        }

        for (char c : word2)
        {
            freq2[c - 'a']++;
        }

        for (int i = 0; i < 26; ++i)
        {
            if ((freq1[i] > 0) != (freq2[i] > 0))
            {
                return false;
            }
        }

        // check 3: both str must contain same freq dist of char
        std::sort(freq1.begin(), freq1.end());
        std::sort(freq2.begin(), freq2.end());

        return freq1 == freq2;
    }
};