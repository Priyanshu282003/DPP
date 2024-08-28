class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        map<int , int> m;
        multimap<int ,int , greater<int>> k;
        
        for(auto &i : arr){
            m[i]++;
        }
        
        for(auto &i : m){
           k.insert({i.second, i.first});
        }
        
        vector<int> ans;
        
        for(auto &i : k){
            for (int j = 0; j < i.first; j++) {
            ans.push_back(i.second);
        }
        }
        
        return ans;
    }
};