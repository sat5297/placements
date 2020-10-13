class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        vector<int> v = A;
        int n = A.size(), res = 0;
        sort(v.begin(), v.end());
        for(int i = n-3; i>= 0 ; i--)
        {
            if((v[i] + v[i+1]) > v[i+2])
            {
                res = v[i] + v[i+1] + v[i+2];
                break;
            }
        }
        return res;
    }
};
