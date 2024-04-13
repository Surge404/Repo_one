class Solution {
    int walk(int i,int j){
        if(i==0&&j==0){
            return 1;
        }
        if(i<0||j<0){
            return 0;
        }
        int lw =0, rw = 0;
        if(i>0){
            lw = walk(i-1,j);
        }
        if(j>0){
            rw =  walk(i,j-1);
        }
        return lw+rw;
    }
public:
    int uniquePaths(int m, int n) {
        return walk(m-1,n-1);
    }
};
