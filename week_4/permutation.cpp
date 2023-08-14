class Solution {
private:
     void recur(vector<vector<int>>&ans,vector<int>&nums,int index)
     {
        if (index == nums.size()) {
        ans.push_back(nums);
        return;
        }
         
         for(int i=index;i<nums.size();i++)
         {
             swap(nums[i],nums[index]);
             recur(ans,nums,index+1);
             swap(nums[i],nums[index]);
         }
             
     }
     
public:    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        recur(ans,nums,0);
        return ans;
    }
};