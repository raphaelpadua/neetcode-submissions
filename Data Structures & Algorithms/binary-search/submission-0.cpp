class Solution {
public:
    int search(vector<int>& nums, int target) {
        //Brute force
        //Compare target to each item in the array
        //Space: O(n) Time: O(n)
        //Iterate through the entire array
        for(int i = 0; i < nums.size(); ++i)
        {
            //Check if current index' value is equal to target then return true
            if(nums[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};
