class Solution {
public:
    string longestCommonPrefix(vector<string>& nums) {
        if(nums.size()==0)
            return "";
        else
        {
            string s=nums[0];
            int i=1;
            int k=0;
         int t=s.size()-1;
            while(i<nums.size())
            {
                if(nums[i].find(s)==0)
                {
                    i+=1;
                }
                else
                {
                    s.erase(t-k,t+1);
                    k+=1;
                }
            }
            return s;
        }
    }
};