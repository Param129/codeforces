
class Solution {
public:
    int solve(int i, int currev, vector<int>& revo, vector<vector<int>>& monoto) {
        if (i >= revo.size()) {
            return 0;
        }
        
        if (monoto[i][currev] != -1) {
            return monoto[i][currev];
        }
        
        int take = 0;
        if (revo[i] > currev) {
            take = revo[i] + solve(i + 1, currev + revo[i], revo, monoto);
        }
        
        int notTake = solve(i + 1, currev, revo, monoto);
        
        return monoto[i][currev] = max(take, notTake);
    }
    
    int maxTotalReward(vector<int>& revo) {
        int n = revo.size();
        vector<vector<int>> monoto(n, vector<int>(50001, -1));  
        sort(revo.begin(),revo.end());
        return solve(0, 0, revo, monoto);
    }
};

