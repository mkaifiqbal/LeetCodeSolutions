class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int> fre;
        int sum = 0;
        int left =0;
        int ans = INT_MAX;

        for(int i=0;i<n;i++){
            if(fre[nums[i]]==0) sum+= nums[i];
            fre[nums[i]]++;
            while(sum >=k){
                ans = min(ans,i-left+1);
                fre[nums[left]]--;
                if(fre[nums[left]]==0) sum -= nums[left];
                left++;
            }
        }
    return ans == INT_MAX ? -1 :ans;
    }
};