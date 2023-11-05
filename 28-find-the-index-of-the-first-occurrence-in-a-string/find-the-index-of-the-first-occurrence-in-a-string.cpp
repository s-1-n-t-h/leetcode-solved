class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.length(), n = needle.length();
        for(int i = 0; i <= m-n; i++){
            int j = 0;
            for( ; j < n; j++){
                if(needle.at(j) != haystack.at(i+j)) break;
            }
            if(j == n ){
                return i;
            }
        }
        return -1;
    }
};