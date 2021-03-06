class Solution
{
public:
    int rob(vector<int>& nums)
    {
        int size=nums.size();
        if(size==0)
            return 0;
        if(size==1)
            return nums[0];
        int dp[size+1];
      
        dp[0]=0;
        dp[1]=nums[0];
        dp[2]=nums[1];
        for(int i=2;i<nums.size();i++)
            dp[i+1]=nums[i]+max(dp[i-1],dp[i-2]);
        return max(dp[size],dp[size-1]);
    }
};