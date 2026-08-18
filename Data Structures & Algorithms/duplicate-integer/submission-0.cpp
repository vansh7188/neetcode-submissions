class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        //now iterate 
        for(auto it: mp){
            if(it.second > 1)return true;
            else continue;
        }return false;
    }
};