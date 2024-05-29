class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();int freq=0, majele = -1;
        for(int i = 0;i<n;i++){cout<<freq<<" "<<majele<<endl;
            if(freq==0){majele=nums[i];freq++;}
            else if(nums[i]==majele){freq++;}
            else if(nums[i]!=majele){freq--;}
        }
        return majele;
    }
};
