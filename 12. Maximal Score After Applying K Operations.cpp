class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue <pair<int,int>> pq ;

    long long sum=0 ;

    for (int i=0 ; i<nums.size() ; i++)
        pq.push(make_pair( nums[i],i)) ;

    while (k--)
    {
        auto x = pq.top() ;
        sum = sum + x.first ;
        pq.pop() ;
        pq.push(make_pair (ceil(x.first/3.0), x.second) ) ;
    }
    return sum ;
    }
};
