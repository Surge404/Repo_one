class Solution {
    void merge(vector<int> & arr, int low, int mid, int high,long int & count, vector<int> & temp){
    int i = low, j = mid+1;
    
    while(i<=mid&&j<=high){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;

        }
        else if(arr[i]>arr[j]){
            temp.push_back(arr[j]);
            j++;
            count+=mid-i+1;
        }        
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i = low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    while(!temp.empty()){
        temp.pop_back();
    }

}
void mergeSort(vector<int> &arr, int low,int high,long int &count, vector<int> & temp){
    if(low>=high){
        return;
    }
    int mid = (low+high)/2;
    mergeSort(arr, low, mid, count, temp);
    mergeSort(arr, mid+1, high, count, temp);
    merge(arr, low, mid, high, count, temp);
}
public:
    bool isIdealPermutation(vector<int>& nums) {
        vector<int> temp;
        int n = nums.size();
        long int Lcount = 0;
        long int count =0;
        for(int i = 0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                Lcount++;
            }
        }
        mergeSort(nums, 0, n-1,count, temp);
        return count==Lcount;
    }
};
