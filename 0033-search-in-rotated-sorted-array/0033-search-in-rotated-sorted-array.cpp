class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0;
        int ed = nums.size()-1;
        while(st<=ed){
            int md = st + (ed-st/2);
            if(target == nums[md]) return md;
            if(nums[st] <= nums[md]) {
                if(target >= nums[st] && target <= nums[md]) {
                    ed = md-1;
                }else {
                    st = md+1;
                }
            }else {
                if(target >= nums[md] && target <= nums[ed]) {
                    st = md + 1 ;
                }else ed = md - 1;

            }
        }
        return -1;
    }
};