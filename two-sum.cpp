class Solution {
public:
 vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    unordered_map<int,int> map;
    for (int i=0;i<nums.size();i++){
        if (map.count(target-nums[i])){
            res.push_back(map[target-nums[i]]);
            res.push_back(i);
            break;
        }else{
            map[nums[i]]=i;
        }
    }
    return res;
}
};