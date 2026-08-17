class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;

        for (int x : nums) {
        st.insert(x);
       }

    if (st.empty()) return 0;

     int cnt = 1;
      int maxi = 1;

    auto it = st.begin();
     auto prev = it;
     ++it;

                                                                                            for (; it != st.end(); ++it) {
                                                                                             if (*it == *prev + 1) {
                                                                                             cnt++;
                                                                                                                                    } 
                                                                                             else {
                                                                                            maxi = max(maxi, cnt);
                                                                                              cnt = 1;
                                                                                                                                                                                            }

         prev = it;
                                                                                              }

                                                                                                maxi = max(maxi, cnt);
                                                                                                 return maxi;
           
        

        
    }
};