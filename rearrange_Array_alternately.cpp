

Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on...

Note: O(1) extra space is allowed. Also, try to modify the input array as required.


Example:
Input:
2
6
1 2 3 4 5 6
11 
10 20 30 40 50 60 70 80 90 100 110

Output:
6 1 5 2 4 3
110 10 100 20 90 30 80 40 70 50 60


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int test,n;
	cin >> test;
	while(test--)
	{
	    cin >> n;
	    long int arr[n];
	    for(int i = 0; i < n; i++)
	        cin >> arr[i];
	    
	    long int max_idx = n - 1, min_idx = 0; 
        long int max_elem = arr[n - 1] + 1; 
        for (int i = 0; i < n; i++) 
        { 
            if (i % 2 == 0) 
            { 
                arr[i] += (arr[max_idx] % max_elem) * max_elem; 
                max_idx--; 
            } 
       
            else 
            { 
                arr[i] += (arr[min_idx] % max_elem) * max_elem; 
                min_idx++; 
            } 
        } 
        
        // for (int i = 0; i < n; i++) 
        //     cout << arr[i] << " " ;
        // cout << endl;
        
        for (int i = 0; i < n; i++) 
            arr[i] = arr[i] / max_elem; 
        
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " " ;
        cout << endl;
	}
	return 0;
}
