class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
           int n = arr.size();
        vector<int> leftSmall(n,0);
        vector<int> rightLarge(n,0);
        leftSmall[0]    = arr[0];
        rightLarge[n-1] = arr[n-1];
        for(int i = 1; i < n; i++)
        {
            leftSmall[i] = min(arr[i], leftSmall[i-1]);
        }
        
        for(int i = n-2; i >= 0; i--)
        {
            rightLarge[i] = max(arr[i],rightLarge[i + 1]);
        }
        
        for(int i = 1; i <= n-2; i++)
        {
            if(arr[i] > leftSmall[i-1] && arr[i] < rightLarge[i+1])
                return {leftSmall[i-1], arr[i], rightLarge[i+1]};
            
        }
        return {};
    }
};