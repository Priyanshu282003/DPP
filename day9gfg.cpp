class Solution {
  public:

    

    int missingNumber(int n, vector<int>& arr) {

        int XOR1=0;
        int XOR2=0;
        
        for(int i=0; i<n-1; i++){
            XOR1=XOR1^arr[i];
        }
        
        for(int i=1; i<=n; i++){
            XOR2=XOR2^i;
        }
        
        int XOR3=XOR1^XOR2;
        return XOR3;
    }
};