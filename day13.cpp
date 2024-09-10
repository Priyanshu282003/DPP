class Solution {
  public:
   public:
    
    void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited) {
        visited[node] = true;
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, graph, visited);
            }
        }
    }

    
    bool isStronglyConnected(vector<vector<int>>& graph, vector<int>& inDegree) {
        vector<bool> visited(26, false);
        int startNode = -1;

        
        for (int i = 0; i < 26; i++) {
            if (!graph[i].empty() || inDegree[i] > 0) {
                startNode = i;
                break;
            }
        }

       
        if (startNode == -1) return false;

        
        dfs(startNode, graph, visited);

        
        for (int i = 0; i < 26; i++) {
            if ((!graph[i].empty() || inDegree[i] > 0) && !visited[i]) {
                return false;
            }
        }

        return true;
    }

    int isCircle(vector<string> &arr) {
        vector<vector<int>> graph(26);  
        vector<int> inDegree(26, 0);    
        vector<int> outDegree(26, 0);   

        
        for (const string& str : arr) {
            int start = str.front() - 'a';  
            int end = str.back() - 'a';     
            graph[start].push_back(end);    
            outDegree[start]++;             
            inDegree[end]++;                
        }

        
        for (int i = 0; i < 26; i++) {
            if (inDegree[i] != outDegree[i]) {
                return 0;  
            }
        }

       
        return isStronglyConnected(graph, inDegree) ? 1 : 0;
    }
};