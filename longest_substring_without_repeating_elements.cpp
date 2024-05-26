class Solution {
public:
    int lengthOfLongestSubstring(string s) {int n = s.length();
        int maxcount =0, count=0;
        
        for(int i = 0;i<n;i++){count=0;bool visited[256]={false};
            for(int j = i;j<n;j++){
                if(visited[s[j]]==false){count++;visited[s[j]]=true;}
                else{break;}
                
                
            }maxcount=max(count, maxcount);
        }
    return maxcount;
    }
};
