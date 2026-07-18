class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //brute force
        //iterate to check through each combination
        vector<int> res;
        //loop once for the first number
        for(int i = 0; i < nums.size();i++)
        {
            
            //loop second for the second number
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;
    }
};
