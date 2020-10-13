class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        int res = 0, curr =1, n = nums.size() ;
        
        for(int i = 0; i < n; i++)
        {
            curr = 1;
            for(int j = i; j < n-1; j++)
            {
                if(nums[j+1] > nums[j])
                    curr += 1;
                else
                    break;
            }
            res = max(res,curr);
        }
        return res;
    }
};
