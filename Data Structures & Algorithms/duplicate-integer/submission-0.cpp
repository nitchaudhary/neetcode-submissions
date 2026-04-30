class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
         unordered_set<int> s;
         for(int i=0;i<n;i++){
            if(s.find(nums[i])!=s.end()){
                s.insert(nums[i]);
            }else{
                return true;
            }
         }
         return false;
    }
};