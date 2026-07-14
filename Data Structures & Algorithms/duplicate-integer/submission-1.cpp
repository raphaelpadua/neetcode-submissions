class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //Check if vector is not empty
        if(nums.size() == 0)
        {
            return false;
        }
        //Copy vector into a ordered set
        unordered_set<int> result(nums.begin(), nums.end());

        //If set size is smaller, duplicate is found
        return result.size() == nums.size() ? 0 : 1;
    }
};