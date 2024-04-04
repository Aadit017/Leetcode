// https://leetcode.com/problems/valid-anagram/description/
class Solution
{
public:
    void remove_duplicates(vector<char> &a)
    {
        // for(auto i=a.begin();i!=a.end();i++){
        //     auto it=find(a.begin(),i,*i);
        //     if(it!=i){
        //         a.erase(it);
        //         --i;
        //     }
        // } welp this wasnt requried
        sort(a.begin(), a.end());
    }
    bool isAnagram(string s, string t)
    {
        vector<char> sV(s.begin(), s.end());
        vector<char> tV(t.begin(), t.end());
        remove_duplicates(sV);
        remove_duplicates(tV);
        return sV == tV;
    }
};

// vector in cpp has way too many functions we can use i cant lie