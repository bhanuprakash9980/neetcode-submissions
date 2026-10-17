class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // unordered_map<int, int> mp;

        // for(size_t i=0; i< nums.size(); i++)
        // {
        //     auto it = mp.find(target-nums[i]);

        //     if (it != mp.end())
        //         return {min(static_cast<int>(i), it->second), max(static_cast<int>(i), it->second)};
        //     mp.insert({nums[i], static_cast<int>(i)});
        // }

        
        unordered_map <int, int> index_map;
        vector<int> results;
        index_map[nums[0]]=0;
        for(int i=1; i<nums.size(); i++)
        {
            auto pos_it = index_map.find(target-nums[i]);
            if(pos_it != index_map.end())
            {
                return {min(i, index_map[target-nums[i]]), max(i, index_map[target-nums[i]])};
            }
            index_map[nums[i]] = i;
        }
        return {};

    }
};
