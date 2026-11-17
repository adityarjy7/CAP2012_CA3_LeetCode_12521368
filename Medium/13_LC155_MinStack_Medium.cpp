#include <stack>
#include <algorithm>

class MinStack {
private:

    std::stack<std::pair<int, int>> st;

public:
    MinStack() {
        
    }
    
    void push(int value) {
        if (st.empty()) {
            st.push({value, value});
        } else {
            int currentMin = std::min(value, st.top().second);
            st.push({value, currentMin});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
