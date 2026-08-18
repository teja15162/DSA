class Solution {
public:
    bool check(vector<int>& nums) {    
        /* B[i] = A[(i+x) % A.size()] 
            where A => sorted array
                  B => given array
                  x => no of rotations  */

        // 1st preserve the array and sort the array
        vector<int> temp = nums;
        sort(temp.begin(),temp.end());

        if(nums == temp) return true;   // if 0 rotations

        // 2nd find no of rotations (x)
        int x = 1;

        for(int i=nums.size()-2;i>=0;i--) {
            if(nums[i] > nums[i+1]) {
                break;
            }

            x++;
        }

        // 3rd use formula and check
        for(int i=0;i<nums.size();i++) {
            if(nums[i] != temp[(i+x) % temp.size()]) {
                return false;
            }
        } 

        return true;
    }
};