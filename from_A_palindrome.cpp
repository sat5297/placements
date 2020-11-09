Given a string s. In one step you can insert any character at any index of the string.

Return the minimum number of steps to make s palindrome.

A Palindrome String is one that reads the same backward as well as forward.

 

Example 1:

Input: s = "zzazz"
Output: 0
Explanation: The string "zzazz" is already palindrome we don't need any insertions.

Example 2:

Input: s = "mbadm"
Output: 2
Explanation: String can be "mbdadbm" or "mdbabdm".



class Solution {
public:
    int minInsertions(string s) {
    int n = s.size();    
    int table[n][n];
    int l, h, gap;
    
    memset(table, 0 , sizeof(table));
    
    for(gap = 1; gap < n; gap++)
    {
        for(int l = 0, h = gap;h < n; l++,h++)
        {
            if(s[l] == s[h])
                table[l][h] = table[l+1][h-1];
            else
                table[l][h] = min(table[l][h-1], table[l+1][h]) + 1;
        }
    }
    return table[0][n-1];
        
    }
};
