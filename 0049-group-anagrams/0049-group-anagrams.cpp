class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>storage;

        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            storage[s].push_back(strs[i]);
        }

        vector<vector<string>>ans;

        for(auto it:storage){
            ans.push_back(it.second);
        }


        return ans;

        
    }
};