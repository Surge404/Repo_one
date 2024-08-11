class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
      int counter =0;
      int n = g.size();
      int k = s.size();
      int j =0, i=0, count =0;
      sort(g.begin(), g.end());
      sort(s.begin(), s.end());
       while(i<s.size()&&j<g.size()){
        if(s[i]>=g[j]){j++;counter++;}
        i++;
       }
       return counter;
    }
};class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
      int counter =0;
      int n = g.size();
      int k = s.size();
      int j =0, i=0, count =0;
      sort(g.begin(), g.end());
      sort(s.begin(), s.end());
       while(i<s.size()&&j<g.size()){
        if(s[i]>=g[j]){j++;counter++;}
        i++;
       }
       return counter;
    }
};
