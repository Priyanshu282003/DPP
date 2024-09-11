class Solution {
  public:
    
    long long minCost(vector<long long>& arr) {
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        vector<long long>ansarr;
        long long ans = 0;
        
       
        for(int i = 0;i<arr.size();i++){
            pq.push(arr[i]);
        }
        
        while(pq.size()!=1){
            long long sum =pq.top();
            pq.pop();
            sum+=pq.top();
            pq.pop();
            pq.push(sum);
            ansarr.push_back(sum);
        }
       
       
        for(int i = 0;i<ansarr.size();i++){
            ans+=ansarr[i];
        }
        return ans;
    }
};