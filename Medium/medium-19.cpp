// https://leetcode.com/problems/min-stack/submissions/

class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> v;
        vector<int> minm;
        
        // int mi=INFINITY;
    MinStack() {
        
    }
    
    void push(int x) {
        v.push_back(x);
        if(minm.size()==0)
        {
            minm.push_back(x);
        }
        else
        {
            if(x<minm[minm.size()-1])
            {
                minm.push_back(x);
            }
            else
            {
                minm.push_back(minm[minm.size()-1]);
            }
        }
      
    }
    
    void pop() {
        
        v.erase(v.begin()+v.size()-1);
        minm.erase(minm.begin()+minm.size()-1);
        
        
    }
    
    int top() {
        return v[v.size()-1];
    }
    
    int getMin() {
        
        return minm[minm.size()-1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */