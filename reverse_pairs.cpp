class Solution {
    void count_pairs(vector<int> & arr, int low, int mid, int high, long int & count){
        int right = mid+1;
        for(int i = low;i<=mid;i++){
            long long int one = arr[i], two = arr[right];
            while(right<=high&&one>2*two){
                right++;
                if(right>high){break;}
                one = arr[i]; two = arr[right];
            }
            count+=right-mid-1;
        }
    }
    void merge(vector<int> & arr, int low, int mid, int high, long int & count){
    int i = low, j = mid+1;
    vector<int> temp;
    while(i<=mid&&j<=high){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else if(arr[i]>arr[j]){
            temp.push_back(arr[j]);
            j++;
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

}
void mergeSort(vector<int> &arr, int low,int high, long int & count){
    if(low>=high){
        return;
    }
    int mid = (low+high)/2;
    mergeSort(arr, low, mid, count);
    mergeSort(arr, mid+1, high, count);
    count_pairs(arr, low, mid, high, count);
    merge(arr, low, mid, high, count);
}
public:
    int reversePairs(vector<int>& nums) {
        long int count =0;
        mergeSort(nums, 0, nums.size()-1,count);
        return count;
    }
};
