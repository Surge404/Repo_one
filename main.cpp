#include <bits/stdc++.h> 
using namespace std;
int walk(int m, int n, int i, int j,vector<vector<int>> &dp){
if(i==0&&j==0){
	return 1;
}

if(dp[i][j]!=-1){
	return dp[i][j];
}
int lc =1+ walk(m,n,i-1,j,dp);
int rc = 1+walk(m,n,i,j-1,dp);
return dp[i][j]=lc+rc;
}


int uniquePaths(int m, int n) {
	vector<vector<int>> dp(n+1,vector<int>(4,-1));
	return walk(m,n,m,n,dp);


}
int main(){
    
    cout<<uniquePaths(2,2);
    return 0;
}