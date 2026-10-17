// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {

//         // unordered_map<string, vector<string>> mp_res;
        
//         // vector<vector<string>> results;
//         // string og_str;

//         // for(auto &str:strs)
//         // {  
//         //    og_str = str;
//         //    sort(str.begin(), str.end());
//         //    mp_res[str].push_back(og_str);
//         // }

//         // for(const auto& mp_item:mp_res)
//         // results.push_back(mp_item.second);

//         // ---------------------Appproach 2---------------
//         vector<vector<string>> results;

//         unordered_map<string, vector<string>> mp_results;

//         vector<int> char_mp(26,0);

//         for(auto &str:strs)
//         {
//             for(char c:str)
//             {char_mp[c-'a']++;
//             }

//             string str_res="";

//             for(auto const &item:char_mp)
//                 str_res+= (item+'a')+ " ";

//             mp_results[str_res].push_back(str);
//             char_mp.assign(26,0);
//         }

//         for(auto const & mp_item: mp_results)
//          results.push_back(mp_item.second);

//         return results;
//     }
// };

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (const string& s : strs) {
            // One byte per letter: counts are at most 100, so each fits in a char.
            // Fixed width (26 bytes) means no separator is needed.
            string key(26, '\0');
            for (char c : s) key[c - 'a']++;
            groups[key].push_back(s);
        }

        vector<vector<string>> results;
        results.reserve(groups.size());
        for (auto& [key, words] : groups)
            results.push_back(std::move(words));

        return results;
    }
};
