#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> & arr, int low, int mid, int high){
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
void mergeSort(vector<int> &arr, int low,int high){
    if(low>=high){
        return;
    }
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}
int main(){
    int n = 6;
    vector<int> arr(6);
arr[0]=5;
arr[1]=3;
arr[2]=7;
arr[3]=2;
arr[4]=1;
arr[5]=9;
cout<<endl;
    mergeSort(arr, 0, 5);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
