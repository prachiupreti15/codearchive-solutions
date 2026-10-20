class Solution {
public:
    int lengthOfLastWord(string s) {

        int ans = 0 ;
        int n = s.length();
        int start = n-1;

        for ( int i = n-1 ; i >= 0 ; i-- ){
            if (s[i] == ' ') start -= 1;
            else break;
        }

        for ( int i = start  ; i >= 0 ; i-- ){
            while (i >= 0 && s[i] != ' '){
                ans++;
                i--;
            }
            if (i >= 0 && s[i] == ' ') break;
        }
        return ans;
    }
};