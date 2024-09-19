class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = nums.size();
        unordered_map<int, int> hash;
        
        for(int i = 0; i < a; i++) {
            hash[nums[i]] += 1;
        }
        
       
        for(int i = 0; i < a; i++) {
            if(hash[nums[i]] == 1) {
                return nums[i];
            }
        }
        
        
        return -1;
    }
};
