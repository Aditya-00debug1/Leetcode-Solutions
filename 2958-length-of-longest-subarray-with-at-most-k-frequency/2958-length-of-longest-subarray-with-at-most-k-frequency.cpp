class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans=0;
        int l=0;
         unordered_map<int,int>mpp;
        for(int r=0;r<nums.size();r++){
           
            mpp[nums[r]]++;
            while(mpp[nums[r]]>k){
                mpp[nums[l]]--;
                l++;
            }
            
            ans=max(ans,r-l+1);
        }
        return ans;
        
    }
};