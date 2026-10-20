class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size();
        string prefix = "";
        if ( n == 0 ) return prefix;

        sort (strs.begin() , strs.end());

        string a = strs[0];
        string b = strs[n-1];

        for ( int i = 0 ; i < strs[0].length() ; i++ ){
            if(a[i] == b[i]) prefix += a[i];
            else break;
        }
        return prefix;
    }
};