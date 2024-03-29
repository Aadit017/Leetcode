// https://leetcode.com/problems/plus-one/description/

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        bool carry = true;
        if (digits[digits.size() - 1] < 9)
        {
            digits[digits.size() - 1] += 1;
        }
        else
        {
            if (digits.size() == 1)
            {
                return {1, 0};
            }
            else
            {
                // if its 9
                for (int i = digits.size() - 1; i >= 0; --i)
                {
                    if (digits[i] == 9)
                    {
                        if (carry)
                        {
                            digits[i] = 0;
                            carry = true;
                        }
                    }
                    else if (digits[i] < 9)
                    {
                        digits[i] += 1;
                        carry = false;
                        break;
                    }
                }
                if (digits[0] == 0)
                {
                    digits.emplace(digits.begin(), 1);
                }
            }
        }
        return digits;
    }
};
//! beats 100% users;
// god knows what ive written
/*

original solution that i had written but it couldnt handle large numbers even with long long data type so had to write a new one


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long sum=0;
        for(auto i=digits.begin();i!=digits.end();){
            sum=sum*10+(*i);
            ++i;
        }
        sum=sum+1;
        digits.clear();
        while(sum>0){
            int l=sum%10;
            digits.emplace(digits.begin(),l);
            sum/=10;
        }
        return digits;
    }
};
*/