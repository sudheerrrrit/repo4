class Solution {
public:
    int countBinarySubstrings(string s) {
         int prev = 0 ; int curr = 1 ; 
       int res=0 ;
       for(int  i = 1 ; i < s.length() ; i++){
           if(s[i]==s[i-1]) curr ++;
           else{
             res += min(prev , curr);
              prev = curr ; 
              curr = 1;
           }
       } 
       return res + min(prev , curr);
    }
};
