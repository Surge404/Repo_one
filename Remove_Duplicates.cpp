class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans=0;
        set<int> st;
        for(auto it : nums){
            if(true){
                st.insert(it);
            }
        }
        set<int> :: iterator itr;
        int i = 0;
        for(itr = st.begin(); itr!= st.end(); itr++){
            ans++;
            nums[i]=*itr;
            i++;
        }
        return ans;
    }
};
