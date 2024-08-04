class Solution {
private:
    void subset(int i, int n, set<vector<int>>& st, vector<int>& nums,
           vector<int> temp) {
        
        if (i == n) {
            sort(temp.begin(), temp.end());
            st.insert(temp);
            return;
        }
        temp.push_back(nums[i]);
        subset(i+1, n, st, nums, temp);
        temp.pop_back();
        subset(i+1, n, st, nums, temp);
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        int i = 0;
        vector<int> temp;
        set<vector<int>> st;
        subset(i, n, st, nums, temp);
        set<vector<int>>:: iterator itr;
        for(itr = st.begin(); itr!=st.end(); itr++){
            ans.push_back(*itr);
        }
        return ans;
    }
};
