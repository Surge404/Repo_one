class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        int maxi = intervals[0][1];
        int mini = intervals[0][0];
        vector<int> temp(2);
        vector<vector<int>> ans;
        for(int i = 0;i<n;i++){
            if(intervals[i][0]<=maxi){
                mini = min(mini, intervals[i][0]);
                maxi=max(maxi, intervals[i][1]);
            }
            else{
                temp[0]=mini;
                temp[1]=maxi;
                ans.push_back(temp);
                mini = intervals[i][0];
                maxi = intervals[i][1];
            }
        }
        temp[0]=mini;
        temp[1]=maxi;
        ans.push_back(temp);
        return ans;
    }
};
