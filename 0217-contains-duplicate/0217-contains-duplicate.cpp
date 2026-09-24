class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;

        while(i+1<nums.size()){
            if(nums[i]==nums[i+1]){
                return true;
            }
            else{
                i++;
            }
           
        }
         return false;
    }
};