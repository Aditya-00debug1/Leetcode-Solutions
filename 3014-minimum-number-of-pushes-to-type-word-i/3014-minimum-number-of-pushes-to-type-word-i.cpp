class Solution {
public:
    int minimumPushes(string word) {
         int n=word.length();
        int ans=0;
        int a=1;
        for(int i=0;i<n/8;i++){
            ans+=a*8;
            a++;

        }
        ans+=a*(n%8);
        return ans;
        
    }
};