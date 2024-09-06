class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        long long maxi=LLONG_MIN;
        long long sum=0;
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
            if(sum>maxi){
                maxi=sum;
            }
            
            if(sum<0){
                sum=0;
            }
        }
        
        return maxi;
        
    }
};
