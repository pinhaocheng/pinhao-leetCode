class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        // Initialize pointers for s and t

        int i = 0;

        int j = 0;

        // Loop as long as we haven't run off the end of EITHER string

        while (i < s.length() && j < t.length())
        {

            if (s[i] == t[j])
            {
                i++;
            }
            j++;
        }

        return i == s.size();
    }
};