Find the duplicate in an array of N integers

Input:
N = 4
a[] = {0,3,1,2}
Output: -1
Explanation: N=4 and all elements from 0
to (N-1 = 3) are present in the given
array. Therefore output is -1.


vector<int> duplicates(int a[], int n) {
    // code here
    vector <int> v;
    for(int i = 0; i < n; i++)
    {
        int index = a[i] % n;
        a[index] += n;
    }
    
    int f = 0;
    
    for(int i =0; i < n; i++)
    {
        if((a[i]/n) > 1)
            v.push_back(i);
    }
    
    if(v.size() == 0)
        v.push_back(-1);
    return v;
    
}
