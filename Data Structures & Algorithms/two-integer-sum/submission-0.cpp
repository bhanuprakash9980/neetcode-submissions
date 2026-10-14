class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(size_t i=0; i< nums.size(); i++)
        {
            auto it = mp.find(target-nums[i]);

            if (it != mp.end())
                return {min(static_cast<int>(i), it->second), max(static_cast<int>(i), it->second)};
            mp.insert({nums[i], static_cast<int>(i)});
        }
    }
};
