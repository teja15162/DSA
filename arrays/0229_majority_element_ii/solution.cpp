class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        /* Optimal approach - Moorse voting algorithm 
            TC : O(N)
            Space : O(1)  */

        if(nums.size() == 1) return nums;

        vector<int> ans;

        /* we know that there can be only 2 elements,
         which have frequency > n/3  */

        int cad1 = 0, cad2 = 0;   // to find those 2 elements
        int ct1 = 0, ct2 = 0;

        for(int x : nums) {
            
            if (ct1 > 0 && x == cad1) {
                ct1++;
            }
            else if (ct2 > 0 && x == cad2) {
                ct2++;
            }
            else if (ct1 == 0) {
                cad1 = x;
                ct1 = 1;
            }
            else if (ct2 == 0) {
                cad2 = x;
                ct2 = 1;
            }
            else {
                ct1--;
                ct2--;
            }

        }

        /* verify that cad1 and cad2 are actually have 
        frequency > n/3 before push to vector */

        ct1 = 0;
        ct2 = 0;

        for(int x : nums) {
            if(x == cad1) {
                ct1++;
            } else if(x == cad2) {
                ct2++;
            }
        }

        if(ct1 > (nums.size() / 3)) {
            ans.push_back(cad1);
        }

        if(ct2 > (nums.size() / 3)) {
            ans.push_back(cad2);
        }

        /* sort and return ans, sort doesn't increase TC,
         because ans size was only 2 => O(2log2)  */

        sort(ans.begin(),ans.end()); 

        return ans;  
    }
};