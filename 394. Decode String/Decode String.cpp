#include <string> // for std::string
#include <stack>  // for std::stack
#include <cctype> // for isdigit() and isalpha()

class Solution
{
public:
    string decodeString(string s)
    {
        int currentNum = 0;
        string currentString = "";
        stack<int> counts;
        stack<string> resultStack;

        for (char e : s)
        {
            if (isdigit(e))
            {
                currentNum = currentNum * 10 + (e - '0');
            }
            else if (e == '[')
            {
                counts.push(currentNum);
                resultStack.push(currentString);
                currentNum = 0;
                currentString = "";
            }
            else if (e == ']')
            {
                int k = counts.top();
                counts.pop();
                string prevString = resultStack.top();
                resultStack.pop();
                string tempString = "";
                for (int i = 0; i < k; ++i)
                {
                    tempString += currentString;
                }
                currentString = prevString + tempString;
            }
            else if (isalpha(e))
            {
                currentString += e;
            }
        }
        return currentString;
    }
};