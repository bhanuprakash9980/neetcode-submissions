class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // for(size_t i=0; nums.size() >= 1 && i<nums.size()-1; i++)
        // if(nums[i]==nums[i+1])
        // return true;
        // return false;

        unordered_map<int,int> mp;
        for(size_t i=0; i<nums.size(); i++)
        {
            if(mp[nums[i]] != 0)
             return true;
            mp[nums[i]]++;
        }
        return false;
    }
};