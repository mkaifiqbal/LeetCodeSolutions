class Solution {
public:
    string reorganizeString(string s) {
        string ans = "";
        int n = s.size();
        unordered_map<char, int> mp;
        for (auto it : s)
            mp[it]++;

        priority_queue<pair<int, char>, vector<pair<int, char>>> pq;
        for (auto& it : mp) {
            pq.push({it.second, it.first});
        }
        if (pq.top().first > (n+1)  / 2)
            return ans;
        while (pq.size()>1) {
            auto p = pq.top();
            pq.pop();
            auto a = pq.top();
            pq.pop();
            p.first--;
            a.first--;
            ans += p.second;
            ans+= a.second;
            if (p.first > 0)
                pq.push(p);
            if(a.first>0) pq.push(a);
        }
        if(!pq.empty()) {
            ans += pq.top().second;
        }
        return ans;
    }
};