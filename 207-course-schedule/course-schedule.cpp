class Solution {
public:
    bool topo( unordered_map<int,vector<int>>&adj,int n,vector<int>&ind){
        queue<int>q;
        int c=0;
        for(int i=0;i<n;i++){
            if(ind[i]==0){  
                c++;
            q.push(i);
            }
        }
        while(!q.empty()){
            int u= q.front();
            q.pop();
            for(int v:adj[u] ){
                ind[v]--;
                if(ind[v]==0){
                    c++;
                    q.push(v);
                }
            }
        }
        if(n==c)return true;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
         unordered_map<int,vector<int>>adj;
         vector<int>ind(numCourses,0);
         for(auto vec:prerequisites){
            int a = vec[0];
            int b = vec[1];
            adj[b].push_back(a);
            ind[a]++;
         }
         return topo(adj,numCourses,ind);

    }
};