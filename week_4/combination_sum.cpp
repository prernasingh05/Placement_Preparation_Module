class Solution {
      private:
    void recur(int index,vector<int>&curr,vector<vector<int>> &ans,vector<int>& nums,int sum)
    {
        if(index==nums.size())
        {
          if(sum==0) 
        {
            ans.push_back(curr);
        }
            return;
        }
        //pick the element
        if(nums[index]<=sum)
        { //sum-=nums[index];
            curr.push_back(nums[index]);
        recur(index,curr,ans,nums,sum-nums[index]);
        // sum+=nums[index];
            curr.pop_back();
        }
        recur(index+1,curr,ans,nums,sum);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>v;
        recur(0,v,ans,candidates,target);
        return ans;
    }
    
  
};