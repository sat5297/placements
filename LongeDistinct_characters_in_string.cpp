#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int test,n;
	cin >> test;
	for(; test>=1; test--)
	{
	    int res = 0;
	    string s;
	    cin >> s;
	    
	    for(int i = 0; i < s.size(); i++)
	    {
	        unordered_set <char> s1;
	        for(int j = i; j < s.size(); j++)
	        {
	            int x1 = s1.size();
	            s1.insert(s[j]);
	            int x2 = s1.size();
	            if(x1 == x2)
	            {
	                res = max(res, x2);
	                break;
	            }
	            //cout << x1 << " " << x2 << endl;
	        }
	        int x = s1.size();
	        res = max(res,x);
	        //cout << endl;
	    }
	    cout << res << endl;
	}
	return 0;
}
