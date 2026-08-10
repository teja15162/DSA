class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        /* Better approach than brute force 
            TC : O(N) 
            space : O(N) - not optimal   */

        if(nums.size() == 1) return nums;

        unordered_map<int, int> mp;
        vector<int> ans;

        for(int x : nums) {
            mp[x]++;
        }

        int tar = nums.size() / 3;

        for(auto x : mp) {
            if(x.second > tar) {
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};