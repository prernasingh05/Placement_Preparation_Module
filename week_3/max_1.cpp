class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr=0,ans=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                curr++;
            else{
                cout<<curr<<endl;
               ans = max(ans,curr);
                curr=0;
            }
            
        }
        return max(curr,ans);
    }
};