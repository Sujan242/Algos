
// https://leetcode.com/problems/find-median-from-data-stream/submissions/
#include<bits/stdc++.h>
class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue <double, vector<double>, greater<double> > minh; 
	priority_queue <double> maxh;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
       
        maxh.push(num);
        minh.push(maxh.top());
        maxh.pop();
        if(minh.size()>maxh.size())
        {
            maxh.push(minh.top());
            minh.pop();
        }
        
    }
    
    double findMedian() {
        if(minh.size()==maxh.size())
	    {
	    	return ((minh.top()+maxh.top())/2);
	    }
	    else if(minh.size()>maxh.size())
	    {
	    	return minh.top();
	    }
	    else
	    {
	    	return maxh.top();
	    }
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */