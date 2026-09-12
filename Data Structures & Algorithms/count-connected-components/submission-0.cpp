class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
        visited[node] = true;

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, adj, visited);
            }
        }
    }

    int countComponents(int n, vector<vector<int>>& edges) {
        int ans = 0;

        vector<vector<int>> adj(n);

        // Build graph
        for (auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        vector<bool> visited(n, false);

        // Find connected components
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                ans++;
                dfs(i, adj, visited);
            }
        }

        return ans;
    }
};
