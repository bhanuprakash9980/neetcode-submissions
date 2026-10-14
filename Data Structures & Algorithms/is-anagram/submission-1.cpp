class Solution {
public:
    bool isAnagram(string s, string t) {
    //    sort(s.begin(), s.end());
    //    sort(t.begin(), t.end());
    //    return s == t;

    unordered_map <char, int> mp;
    if(s.length() != t.length())
     return false;
    const size_t s_len = s.length();
    for(size_t i=0; i< s_len; i++)
    {
        mp[s[i]]++;
    }

    for(size_t i=0; i< s_len; i++)
    {
        mp[t[i]]--;
    }

    for(auto map_item:mp)
    {
        if(map_item.second != 0)
         return false;
    }
    return true;

    }
};
