class Solution {
    private:
     void recur(int index,int sum,vector<int> &curr,vector<vector<int>> &ans,vector<int>&nums)
     {
         
         if(sum==0)  
         {
             ans.push_back(curr);
             return;
         }
         if(sum<0) return;
         
         for(int i=index;i<nums.size();i++)
         {
             if(i>index && nums[i]==nums[i-1])  continue;
             curr.push_back(nums[i]);
             recur(i+1,sum-nums[i],curr,ans,nums);
             curr.pop_back();
         }
         
     }
    
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        sort(candidates.begin(),candidates.end());
        vector<int>curr;
        vector<vector<int>> ans;
        recur(0,target,curr,ans,candidates);
        return ans;
    }
};