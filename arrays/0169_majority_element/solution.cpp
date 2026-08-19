class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // use moore's voting algorithm 
        int cad = 0;
        int vote = 0;

        for(int x : nums) {
            if(vote == 0) {  // if votes are 0, choose new candidate
                cad = x;
            }

            if(x == cad) {   // if same candidate, increase votes
                vote++;
            } else {        // else decrease votes
                vote--;
            }
        }

        return cad;
    }
};