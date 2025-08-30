class Solution {
public:
    int check(vector<int>&nums , int i , vector<int>&dp){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1)  return dp[i];
        int val1 = check(nums,i+1,dp);
        int val2 = nums[i]+check(nums,i+2,dp);
        return dp[i] = max(val1,val2);
    }
    int rob(vector<int>& nums) {
        int i = 0;
        vector<int> dp(401,-1);
        return check(nums,i,dp);
    }
};
