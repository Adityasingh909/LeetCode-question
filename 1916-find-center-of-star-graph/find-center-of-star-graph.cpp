class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> adj;
        for (int i = 0; i < edges.size(); i++) {

            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[u].push_back(v);
adj[v].push_back(u);
        }
        for(auto val : adj) {
            vector<int> v = val.second;

            if (v.size() > 1)
                return v[0];
        }
        return 0;
    }
};