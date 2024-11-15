 class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = nums[0], s=0;
        for(int i=0; i<nums.size(); i++){
            if(s<0 || s+nums[i]<0) s=nums[i];
            else  s+= nums[i];
            m=max(m,s);
        }
        return m;
    }
};