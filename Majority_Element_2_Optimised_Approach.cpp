class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ele1=-1, ele2=-1, f1=0, f2=0;
        for(int i = 0;i<n;i++){
            if(f1<0){f1=0;ele1=-1e9;}
            if(f2<0){f2=0;ele2=-1e9;}
            if(f1==0&&f2==0){ele1=nums[i];f1++;}
            else if(nums[i]==ele1){f1++;}
            else if(nums[i]==ele2){f2++;}
            else if(f1==0&&ele2!=nums[i]){ele1=nums[i];f1++;}
            else if(f2==0&&ele1!=nums[i]){ele2=nums[i];f2++;}
            else if(ele1!=nums[i]&&ele2!=nums[i]){f1--;f2--;}
        }
        vector<int> ele;
        cout<<ele1;cout<<" "<<f1<<endl<<ele2;cout<<" "<<f2;
        int acc1 =0, acc2 =0;
for(int i = 0;i<n;i++){
    if(nums[i]==ele1){acc1++;}
    if(nums[i]==ele2){acc2++;}
}
cout<<endl<<acc1<<endl<<acc2;
if(acc1>n/3){ele.push_back(ele1);}
if(acc2>n/3&&ele1!=ele2){ele.push_back(ele2);}
        return ele;
    }
};
