


Example:
Input:
2
4
geeksforgeeks geeks geek geezer
3
apple ape april

Output:
gee
ap




#include <bits/stdc++.h>
using namespace std;

string common(string str1, string str2) 
{ 
    string result; 
    int n1 = str1.length(), n2 = str2.length(); 
  
    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++) 
    { 
        if (str1[i] != str2[j]) 
            break; 
        result.push_back(str1[i]); 
    } 
  
    return (result); 
} 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
	int test,n;
	cin >> test;
	while(test--)
	{
	    //cout << "ere\n";
	    cin >> n;
	    vector < string > v(n);
	    string s1 = "";
	    //cout << "here\n";
	    
	    for(int i = 0; i < n; i++)
	    {
    	    cin >> s1;
    	    v[i] = s1;
	    }
	    
	    s1 = v[0];
	    
	    for(int j = 1; j < n; j++)
	    {
	        s1 = common(s1, v[j]);
	    }
	    if(s1 == "")
	        cout << -1 << endl;
	    else
	        cout << s1 << endl;
	   //cout << s1 << endl;
	   
	}
	return 0;
}
