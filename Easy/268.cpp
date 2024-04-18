// https://leetcode.com/problems/missing-number/description/
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        bool cond = true;
        for (int i = 0; i < nums.size() + 1; i++)
        {
            if (find(nums.begin(), nums.end(), i) != nums.end())
            {
                cond = true;
            }
            else
            {
                cond = false;
            }
            if (cond == false)
            {
                return i;
            }
        }
        return 0;
    }
};