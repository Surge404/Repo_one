class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> ans;
        for(int i = 0;i<n;i++){
            set<int> hashset;                    vector<int> temp;
            for(int j = i+1;j<n;j++){
                if(hashset.find(-1*(arr[i]+arr[j]))!=hashset.end()){

                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(-1*(arr[i]+arr[j]));
                    sort(temp.begin(), temp.end());
                    int flag = 0;                    
                    for(auto x:ans){
                        if(x==temp){
                            flag=1;
                        }
                    }
                    
                    if(flag==0){ans.push_back(temp);}
                    temp.pop_back();temp.pop_back();temp.pop_back();
                    
                }
                hashset.insert(arr[j]);

                    }
            
        }
        return ans;
    }
};
