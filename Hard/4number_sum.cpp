// https://leetcode.com/problems/4sum/submissions/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        multimap<int,pair<int,int>> m;
        vector<vector<int>> o;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        for(int i=1;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                auto itr=m.find(target-nums[i]-nums[j]);
                if(itr==m.end()){continue;}
                while(itr->first==target-nums[i]-nums[j])
                {
                    // auto itr=m.find(target-nums[i]-nums[j]);
                    vector<int> v;
                    v.push_back(nums[(itr->second).first]);
                    v.push_back(nums[(itr->second).second]);
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    
                    
                    s.insert(v);
                    itr++;
                    if(itr==m.end()){break;}
                    
                }
                    
            }
            for(int j=0;j<i;j++)
            {
                m.insert(make_pair(nums[i]+nums[j],make_pair(j,i)));
            }
        }
        for(auto i=s.begin();i!=s.end();i++)
        {
            o.push_back(*i);
        }
        return o;
        
        
    }
};