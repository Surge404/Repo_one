class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            st.insert(nums[i]);
        }
        set<int>:: iterator itr;
        itr = st.begin();
        int prev = *itr-1, count = 0, maxi = 0;
        for(auto s:st){
            if(prev==s-1||prev == s){
                count++;
                prev = s;
                maxi = max(maxi, count);
            }
            else{
                maxi = max(maxi, count);
                prev = s;
                count = 1;
            }
        }
        return maxi;
    }
};
