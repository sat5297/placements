class StockSpanner {
public:
    stack < pair <int, int> > st;
    int count = 0;
    
    StockSpanner() {
        count = 0;    
    }
    
    int next(int price) {
        count += 1;
        
        int span;
        while(!st.empty() && st.top().second <= price)
            st.pop();
        
        if(st.empty())
            span = count;
        else
            span = count - st.top().first - 1;
        
        st.push({count-1,price});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
