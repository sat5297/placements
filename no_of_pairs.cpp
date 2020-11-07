Given two arrays X[] and Y[] of size M and N respectively. Find number of pairs such that xy > yx where x is an element from X[] and y is an element from Y[].



Input:
M = 3, N = 2
X[] = {2, 1, 6}, Y = {1, 5}
Output: 3
Explanation: There are total 3 pairs 
where pow(x, y) is greater than pow(y, x) 
Pairs are (2, 1), (2, 5) and (6, 1)

long long countPairs(int X[], int Y[], int m, int n) {
        
        int NoOfY[5] = {0};
        
        for(int i = 0; i < n; i++)
        {
            if(Y[i] < 5)
                NoOfY[Y[i]] += 1;
        }
        
        sort(Y, Y + n);
        long long total_pairs = 0;
        
        for(int i = 0; i < m; i++)
        {
            if(X[i] == 0)
                total_pairs += 0;
                
            else if(X[i] == 1)
                total_pairs += NoOfY[0];
                
            else
            {
                //cout << endl << "here\n";
                int *idx = upper_bound(Y,Y+n,X[i]);
                
                int ans = (Y + n) - idx;
                ans += (NoOfY[0] + NoOfY[1]);
                if(X[i] == 2)
                    ans -= (NoOfY[3] + NoOfY[4]);
                if(X[i] == 3)
                    ans += (NoOfY[2]);
                total_pairs += ans;
            }
            //cout << total_pairs << " \n";
        }
        return total_pairs;
    }
