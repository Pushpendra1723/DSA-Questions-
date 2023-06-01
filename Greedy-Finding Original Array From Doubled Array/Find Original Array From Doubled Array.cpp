    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>ans;
        int n=changed.size();
        if(n&1)return ans;
        else
        {
            unordered_map<int,int>mp;
            for(int i=0;i<n;i++)
            {
                mp[changed[i]]++;
            }

            sort(changed.begin(),changed.end());

            for(int i=0;i<n;i++)
            {
                if(mp[changed[i]]==0)continue;
                else
                {
                    mp[changed[i]]--;
                    if(mp[2*changed[i]]!=0)
                    {
                        mp[2*changed[i]]--;
                        ans.push_back(changed[i]);
                    }
                    else
                    {
                        vector<int>v;
                        return v;
                    }
                    
                }
        
            }
            return ans;
        }
    }