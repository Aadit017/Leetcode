// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int temp = nums[0];
        int s = nums.size();
        int k = 0;
        for (auto i = nums.begin() + 1; i != nums.end();)
        {
            if (*i == temp)
            {
                i = nums.erase(i);
                k += 1;
            }
            else
            {
                temp = *i;
                ++i;
            }
        }
        return s - k;
    }
};
// beats only 5% of the users , ammend to code to make it more efficient
