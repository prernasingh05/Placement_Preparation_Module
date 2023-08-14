class Solution {
public:
    int trap(vector<int>& a) {
        int res=0,l=0,r=a.size()-1,leftmax=0,rightmax=0;
        
        while(l<=r)
        {
            if(a[l]<a[r])
            {
                if(a[l]>leftmax)  leftmax=a[l];
                else res+=leftmax-a[l];
                l++;
            }
            else
            {
                if(a[r]>rightmax)  rightmax=a[r];
                else res+=(rightmax-a[r]);
                r--;
            }
            
        }
        return res;
        
    }
};