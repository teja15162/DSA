class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ct = 0;
        int mx = 0;

        for(int i=0;i<nums.size();i++) {
            if(nums[i] == 1) {     // it equal, then count
                ct++;
            } else {
                mx = max(mx,ct);
                ct = 0;          // reset
            }
        }

        // if last element also 1, then mx never updates.
        mx = max(mx,ct);       // so update it before return

        return mx;
    }
};