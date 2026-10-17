class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp_res;
        
        vector<vector<string>> results;
        string og_str;

        for(auto str:strs)
        {  
           og_str = str;
           sort(str.begin(), str.end());
           mp_res[str].push_back(og_str);
        }

        for(auto mp_item:mp_res)
        results.push_back(mp_item.second);

        return results;
    }
};
