class Solution {
public:
    vector<int>topo( unordered_map<int,vector<int>>&adj,vector<int>&inde,int n){
        queue<int>q;
        vector<int>ans;
        int count =0;
        for(int i=0;i<inde.size();i++){
            if(inde[i]==0){
                count++;
                ans.push_back(i);
                q.push(i);
            }
            
        }
        while(!q.empty()){
            int u  = q.front();
            q.pop();
            for(int v:adj[u]){
                inde[v]--;
                if(inde[v]==0){
                    q.push(v);
                    count++;
                       ans.push_back(v);
                }

            }
        }
        if(count==n)return ans;
        return {};
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>adj;
        vector<int>inde(numCourses,0);
        for(auto val:prerequisites){
            int a = val[0];
            int b = val[1];
            adj[b].push_back(a);
            inde[a]++;
        }
        return topo(adj,inde,numCourses);

    }
};