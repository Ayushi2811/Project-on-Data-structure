class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            s^=nums[i];
        }
        return s;
    }
};