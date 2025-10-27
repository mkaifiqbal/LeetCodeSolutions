class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int beam =0;
        int prelaser=0;
        int n= bank.size();
        for(int i=0;i<n;i++){
            int laser =0;
            for(int j=0;j<bank[i].size();j++){
                if (bank[i][j]=='1'){
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