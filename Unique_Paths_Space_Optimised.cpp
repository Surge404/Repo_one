class Solution {

public:
    int uniquePaths(int m, int n) {
        vector<int> prev(n,0);
         vector<int> curr(n,0);
        


        
        for(int i=0;i<m;i++){
            
            for(int j=0;j<n;j++){
                if(i==0&&j==0){
                    curr[j]=1;
                }
                else{
                     int lw=0,rw=0;
                if(i>0){lw=prev[j];}
                if(j>0){rw=curr[j-1];}
                
                 curr[j]=lw+rw;

                }
               
                
           
            }
            prev=curr;
        }

        return prev[n-1];

    }
};
