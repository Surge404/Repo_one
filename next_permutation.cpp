class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();int flag = 0;
        for(int i= n-1;i>=0;i--){
            for(int j = n-1;j>i;j--){
                if(flag==0){
                    if(nums[j]>nums[i]){cout<<j<<" "<<i<<endl<<endl<<endl;
                    int temp=nums[j];
                    nums[j]=nums[i];
                    nums[i]=temp;flag=1;for(int k = 0;k<n;k++){cout<<nums[k]<<endl;}
                    partial_sort(nums.begin()+i+1,nums.end(), nums.end());
                    return;
                }
                }
               
            }
        }
        sort(nums.begin(), nums.end());

    }
};
