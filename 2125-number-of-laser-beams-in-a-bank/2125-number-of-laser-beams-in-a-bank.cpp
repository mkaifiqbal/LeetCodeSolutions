class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int beam =0;
        int prelaser=0;
        // int n= bank.size();
        // int m = bank[0].size();
        // for(int i=0;i<n;i++){
        for (string s: bank){
            int laser =0;
            // for(int j=0;j<m;j++){
            for(char c: s){
                if (c=='1'){
                    laser++;
                }
            }
            if(laser !=0){
                beam += laser * prelaser;
                prelaser = laser;

            }
        }
        return beam;
        
    }
};