// https://leetcode.com/problems/palindrome-number/description/
class Solution
{
public:
    bool isPalindrome(int x)
    {
        int len = to_string(x).length();
        for (int i = 0; i < len / 2; i++)
        {
            if (to_string(x)[i] != to_string(x)[len - i - 1])
            {
                return false;
            }
        }
        return true;
    }
};