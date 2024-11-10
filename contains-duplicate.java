class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> map  ; 
        for (int i=0 ; i< nums.size();i++) 
        { 
            
          auto it =  map.find(nums[ i]) ;
            map[nums[i]]=1 ;
            if ( it != map.end())return true ;
             
        }
        return false ;
        
       
    }
};