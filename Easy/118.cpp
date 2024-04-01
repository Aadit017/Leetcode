// https://leetcode.com/problems/pascals-triangle/description/
//! will have to revisit this cos a lot of fucking chat gpt also im not too sure abhi
//~panchod i wish id taken commerce rn
/*had to take a lot of fucking inspiration from all the sources
will be attempting this via the 2d array scene now panchod
            */

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> dad(numRows); // vector with 5 vectors in it
        for (int i = 0; i < numRows; i += 1)
        {
            dad[i].resize(i + 1);
            dad[i][0] = 1;

            if (i > 0)
            {
                dad[i][i] = 1;
            }
            // first and last values always 1;
            for (int j = 1; j < i; j += 1)
            { // j<=1 cos first row has 1 , second has 2 and so on
                dad[i][j] = dad[i - 1][j - 1] + dad[i - 1][j];
            }
        }
        return dad;
    }
};