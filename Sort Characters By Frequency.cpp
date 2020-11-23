class Solution {
public:
    string frequencySort(string s) {
        map < char, int> mp1;
        
        for(int i = 0; i < s.size(); i++)
        {
            mp1[(s[i])] += 1;
        }
        
        string ans = "";
        map <int, string > mp2;
        for(auto it = mp1.begin(); it != mp1.end(); ++it)
        {
            std::string s;
            char a = (it->first);
            int x = it->second;
            while(x--)
                s.push_back(a);
            //cout << a << " " << s << endl;
            mp2[it->second] += s;
        }
        
        for(auto it = mp2.begin(); it != mp2.end(); ++it)
        {
            ans += it->second;
        }
        std::reverse(ans.begin(),ans.end());
        return ans;
    }
};
