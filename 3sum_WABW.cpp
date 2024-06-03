class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        sort(nums.begin(), nums.end()); // Sort the numbers first
        
        for (int i = 0; i < nums.size() && nums[i] <= 0; ++i) { // Only consider nums[i] <= 0
            if (i == 0 || nums[i] != nums[i - 1]) { // Skip duplicates
                int left = i + 1, right = nums.size() - 1;
                while (left < right) {
                    int sum = nums[i] + nums[left] + nums[right];
                    if (sum == 0) {
                        answer.push_back({nums[i], nums[left], nums[right]});
                        while (left < right && nums[left] == nums[left + 1]) left++;  // Skip duplicates
                        while (left < right && nums[right] == nums[right - 1]) right--; // Skip duplicates
                        left++;
                        right--;
                    } else if (sum < 0) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }
        
        return answer;
    }
};
