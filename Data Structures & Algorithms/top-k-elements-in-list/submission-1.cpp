class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count_map;
        vector<pair<int,int>> count_vec;
        vector<int> results;

        for(int i=0; i<nums.size(); i++)
        count_map[nums[i]]++;

        for(auto item:count_map)
        {
            count_vec.push_back({item.second, item.first});
        }

        sort(count_vec.begin(), count_vec.end(), greater<>());

        for(int i=0; i<k; i++)
        {
            results.push_back(count_vec[i].second);
        }

        return results;
    }
};
