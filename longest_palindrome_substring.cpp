



Input: s = "babad"
Output: "bab"
Note: "aba" is also a valid answer.





class Solution {
public:
    string longestPalindrome(string s) {
        if(s == "" || s.size() < 1)
            return "";
        
        int start = 0, end = 0;
        
        for(int i = 0; i < s.size(); i++)
        {
            int len1 = expand(s,i,i);
            int len2 = expand(s, i , i+1);
            int len = max(len1,len2);
            if(len > (end - start))
            {
                start = i - ((len-1)/2);
                end = i + (len/2);
            }
        }
        return s.substr(start, end-start+1);
    }
    
    int expand(string s, int left, int right)
    {
        if(s == "" || left > right)return 0;
        
        while(left >= 0 && right < s.size() && s[left] == s[right])
        {
            left -= 1;
            right += 1;
        }
        return (right - left - 1);
    }
};
