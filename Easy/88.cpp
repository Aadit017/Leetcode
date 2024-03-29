// https://leetcode.com/problems/merge-sorted-array/
//! this code here was re written after going thru the editorials section

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        for (int i = 0, j = m; i < n; i++)
        {
            nums1[j] = nums2[i];
            j += 1;
        }
        sort(nums1.begin(), nums1.end());
    }
};
// this above here was very heavily influenced from the solution i read online so wont call it a win

/*
this was my orignal Code and worked with 0runtime but only for vectors that didnt contain any negative value
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merger;
        for(int i : nums1){
            if(i!=0){
                merger.push_back(i);
            }
        }
        for(int i:nums2){
            if(i!=0){
                merger.push_back(i);
            }
        }
        sort(merger.begin(),merger.end());
        nums1.clear();
        nums1.assign(merger.begin(),merger.end());
    }
};*/