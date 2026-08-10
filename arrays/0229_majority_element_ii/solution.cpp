class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        /* Better approach than brute force 
            TC : O(N) 
            space : O(N) - not optimal   */

        if(nums.size() == 1) return nums;

        unordered_map<int, int> mp;
        vector<int> ans;

        int tar = (nums.size() / 3) + 1;

        for(int x : nums) {
            mp[x]++;

            if(mp[x] == tar) {
                ans.push_back(x);
            }
        }
 

        return ans;
    }
};