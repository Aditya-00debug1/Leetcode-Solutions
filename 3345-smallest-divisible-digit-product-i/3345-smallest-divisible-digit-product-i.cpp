class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<n+t;i++){
            int p=1;
            int c=i;
            while(c>0){
                p=p*(c%10);
                c=c/10;
            }
            if(p%t==0)
            return i;
        }
        return n;


        
        
    }
};