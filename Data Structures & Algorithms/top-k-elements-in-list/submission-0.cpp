class Solution {
public:

    static bool sort_second(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count_map;
        vector<pair<int,int>> count_vec;
        vector<int> results;

        for(int i=0; i<nums.size(); i++)
        count_map[nums[i]]++;

        for(auto item:count_map)
        {
            count_vec.push_back({item.first, item.second});
        }

        sort(count_vec.begin(), count_vec.end(), sort_second);

        for(int i=0; i<k; i++)
        {
            results.push_back(count_vec[i].first);
        }

        return results;
    }
};
