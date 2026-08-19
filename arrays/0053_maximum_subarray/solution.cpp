class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // using kadane's algorithm 
        int sum = 0;
        int ans = INT_MIN;

        for(int x : nums) {
            sum += x;

            ans = max(ans,sum);

            if(sum < 0) {    // if sum was -ve, don't add it to sum 
                sum = 0;     // we don't want to decrease the value, so initialise with 0
            }
        }

        return ans;
    }
};