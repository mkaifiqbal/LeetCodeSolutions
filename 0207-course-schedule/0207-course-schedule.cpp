class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses,0);

        for(auto &a:pre){
            adj[a[1]].push_back(a[0]);
            indegree[a[0]]++;
        }

        queue<int> q;
        for(int i=0; i<numCourses;i++){
            if(indegree[i]==0) q.push(i);
        }

        int count=0;

        while(!q.empty()){
            int b=q.front();
            q.pop();
            count++;
            for(auto c:adj[b]){
                indegree[c]--;

                if(indegree[c]==0){
                    q.push(c);
                }
            }
        }
        return count==numCourses;
    }
};