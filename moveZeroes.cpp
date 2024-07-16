// https://leetcode.com/problems/move-zeroes/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;

        for(int right = 0; right < nums.size(); right++)
        {
            if(nums[right] != 0)
            {
                swap(nums[left], nums[right]);
                left++;
            }
        }
    }     
};