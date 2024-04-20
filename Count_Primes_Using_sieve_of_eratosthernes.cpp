class Solution {
    int isprime(int n){int count = 0;
        vector<int> marks(n+1,0);
for(int a = 2;a*a<n;a++){
    for(int i = a*a;i<=n;i=i+a){
        marks[i]=1;
    }
    
   
    
}
 for(int i = 2;i<n;i++){
        if(marks[i]==0){count++;}
    }
return count;
    }
public:
    int countPrimes(int n) {
       return isprime(n);
    }
};
