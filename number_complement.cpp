class Solution {
public:
    int findComplement(int num) {
        int res = 0, i = 0;
        while(num != 0)
        {
            if((num&1)==0)
                res += pow(2,i);
            num >>= 1;
            i+=1;
        }
        return res;
    }
};
