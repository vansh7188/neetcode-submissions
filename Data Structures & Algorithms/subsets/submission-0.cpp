class Solution {
    void func(int i, vector<int>&nums, vector<vector<int>>&ans,vector<int>&ds){
        if(i==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        func(i+1 , nums, ans, ds);
        ds.pop_back();
        func(i+1,nums,ans,ds);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int i=0;
        vector<vector<int>>ans;
        vector<int>ds;
        func(i,nums,ans,ds);
        return ans;
    }
};
