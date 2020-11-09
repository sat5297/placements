Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]


class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int lo = 0, mid = 0, hi = nums.size()-1;
        
        while(mid <= hi)
        {
            switch(nums[mid])
            {
                case 0: swap(nums[mid], nums[lo]);
                        lo += 1; mid += 1;
                        break;
                case 1: mid += 1;
                        break;
                case 2: swap(nums[mid], nums[hi]);
                        hi -= 1;
                        break;
            }
        }   
    }
};
