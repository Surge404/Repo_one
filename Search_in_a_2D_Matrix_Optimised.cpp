class Solution {
    int binary_search(vector<int>&matrix, int target){
        int n = matrix.size();
        int s = 0, e=n-1;
        while(s<=e){
            int mid = (s+e)/2;cout<<"dekho"<<s<<" "<<e<<" "<<mid<<endl;
            if(target<matrix[mid]){
                e=mid-1;
            }
            else if(target>matrix[mid]){
                s=mid+1;
            }
            else if(target==matrix[mid]){
                return mid;
            }
        }
        return -1*s;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        vector<int> r1(n,0);
        for(int i = 0;i<n;i++){
            r1[i]=matrix[i][0];
        }
        int t = binary_search(r1, target);cout<<"t "<<t<<endl;
        if(t>0){return true;}
        if(t==0){return target==matrix[0][0];}
        if(t<0){
            int d = binary_search(matrix[-1*t-1], target);
            if(d>=0){cout<<"d "<<d;return true;}
        }
        return false;
    }
};
