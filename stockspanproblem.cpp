For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.

{100, 80, 60, 70, 60, 75, 85},
{1, 1, 1, 2, 1, 4, 6}

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int test,n;
	cin >> test;
	while(test--)
	{
	    cin >> n;
	    int arr[n];
	    
	    for(int i = 0; i < n; i++)
	        cin >> arr[i];
	    
	    stack < int > s1;
	    s1.push(0);
	    cout << 1 << " ";
	    
	    for(int i = 1; i < n; i++)
	    {
	        while((!s1.empty()) && (arr[i] >= arr[s1.top()]))
	            s1.pop();
	            
	        int ele = (s1.empty() == true) ? (i+1):(i - s1.top());
	        cout << ele << " ";
	        s1.push(i);
	    }
	    cout << endl;
	}
	return 0;
}
