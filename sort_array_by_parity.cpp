class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector <int> ans(A.size(),0);
        int k = 0, l = 1;
        for(int i = 0; i < A.size(); i++)
        {
            if(A[i]&1)
            {ans[l] = A[i];l+=2;}
            else
            {ans[k] = A[i];k+=2;}
        }
        return ans;
    }
};
