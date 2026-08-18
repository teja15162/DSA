class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k == 0) return;

        int n = nums.size();

        k = k%n;    // find actual number of rotations 

        // Reverse the entire array
        reverse(nums.begin(),nums.end());

        // Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Reverse the remaining elements
        reverse(nums.begin() + k, nums.end()); 

    }
};