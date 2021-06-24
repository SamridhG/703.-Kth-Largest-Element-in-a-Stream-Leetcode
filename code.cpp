class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>A;// min heap top element smallest 
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(auto i:nums)
        {
            A.push(i);
            if(A.size()>k)A.pop();
        }
    }
    
    int add(int val) {
        A.push(val);
       if(A.size()>k)A.pop();
        return  A.top();
        
    }
};
