// Function to group anagrams


Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

  vector<vector<string>> groupAnagrams(vector<string>& v) {
        map<string,vector<int>>mp;
        vector<string>x=v;
        int n=v.size();
        for(int i=0;i<n;i++){
            sort(v[i].begin(),v[i].end());
            mp[v[i]].push_back(i);
        }
        vector<vector<string>>ans(mp.size());
        int j=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            vector<int>temp=it->second;
            for(int i=0;i<temp.size();i++)
                ans[j].push_back(x[temp[i]]);
            j++;
        }
        return ans;
    }
