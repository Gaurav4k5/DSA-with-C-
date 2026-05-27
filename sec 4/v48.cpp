// leetcode 287. Find the Duplicate Number
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());

        // for(int i=0; i<nums.size()-1; i++){
        //     if(nums[i] == nums[i+1]) {
        //         return nums[i];
        //     }
        // }
        // return -1;

        // visited solution
        int ans = -1;
        for (int i=0; i<nums.size(); i++){
            int index = abs(nums[i]);

            // Already visited
            if(nums[index]<0) {
                ans = index;
                break;
            }
            //visited mark
            nums[index] *= -1;
            
        }
         return ans;
    }
};