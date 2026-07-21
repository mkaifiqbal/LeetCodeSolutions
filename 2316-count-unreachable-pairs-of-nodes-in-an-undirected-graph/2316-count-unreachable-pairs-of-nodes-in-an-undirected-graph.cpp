class Solution {
public:
    vector<int> parent, rank;
    int find(int x){
        if(parent[x]==x) return x;
        return parent[x] = find(parent[x]);
    }

    void union1(int u, int v){
        int pu= find(u);
        int pv= find(v);

        if(pu==pv) return;
        if(rank[pu]<rank[pv]){
            parent[pu] =pv;
        }else if(rank[pv]<rank[pu]){
            parent[pv]=pu;
        }else{
            parent[pv]=pu;
            rank[pu]++;
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        int m= edges.size();

        parent.resize(n);
        rank.assign(n,0);

        for(int i=0; i<n;i++){
            parent[i]=i;
        }


        for(auto &a:edges){
            int u=a[0];
            int v=a[1];

            union1(u,v);

        }
        unordered_map<int,int> mp;
        for(int i=0; i<n;i++)
            mp[find(i)]++;

        long long ans=0;
        long long rem=n;
        for(auto &it: mp){
            rem -= it.second;
            ans+= 1ll* it.second*rem;
        }
        return ans;
    }
};