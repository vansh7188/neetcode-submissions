class Solution {
    int func(int n, int ans, vector<int>&memo){
        if(ans==n){
            return 1;
        }
        if(ans > n)return 0;
        if(memo[ans]!=-1)return memo[ans];
        int take=func(n, ans+1, memo);
        int nottake=func(n, ans+2,memo);
        return memo[ans]=take + nottake;
    }
public:
    int climbStairs(int n) {
        vector<int>memo(n,-1);
        return func(n,0,memo);
    }
};