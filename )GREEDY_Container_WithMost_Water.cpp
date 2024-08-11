class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int s =0, e = n-1, maxi = 0;
        while(s<e){
            maxi =max(min(height[s], height[e])*(e-s), maxi);
            int term = min(height[s], height[e]);
            if(height[s]<height[e]) {
                while(height[s]<=term&&s<e){
                    s++;
                }
            }
            else{
                while(height[e]<=term&&s<e){
                    e--;
                }
            }
        }
        return maxi;
    }
};
