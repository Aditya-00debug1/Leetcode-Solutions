class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
         int l=0;
        int n=nums.size();
        long long ans=LLONG_MIN;
        long long sum=0;
    
        for(int r=0;r<n;r++){
            sum+=nums[r];
            
            if(r-l+1==k){
                
                ans=max(ans,sum);
                sum-=nums[l];
                l++;
            }

        }
        return(double)ans/k;
        
        
    }
};