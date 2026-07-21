class Solution {
public:
    vector<int> parent,rank;
    int find(int x){
        if(parent[x]==x) return x;
        return parent[x]= find(parent[x]);
    }


    void union1(int u,int v){
        int pu= find(u);
        int pv= find(v);

        if(pu==pv){
            return ;
        }

        if(rank[pu]<rank[pv]){
            parent[pu]= pv;
            rank[pv]++;
        
        }else{
            parent[pv]=pu;
            rank[pu]++;
        }
        
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n= edges.size();

        parent.resize(n+1);
        rank.assign(n+1,0);

        for(int i=1;i<=n;i++){
            parent[i]=i;
        }

        for(auto &a: edges){
            int u= a[0];
            int v= a[1];

            if(find(u)==find(v)){
                return a;
            }
            union1(u,v);
        }

        return {};
    }
};