class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> result;
        //Brute Force
        //Space = O(n) Time = O(n^2)
        //Compare each item to each other item
        // for(int i = 0; i < nums.size(); ++i)
        // {
        //     for(int j = 1; j < nums.size(); ++j)
        //     {
        //         if(nums[i] + nums[j] == target)
        //         {
        //             result.push_back(i);
        //             result.push_back(j);
        //             return result;
        //         }
        //     }
        // }

        //More Efficient
        //Create a hash map
        unordered_map<int, int> indices;

        for(int i = 0; i < nums.size(); ++i)
        {
            indices[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); ++i)
        {
            int difference = target - nums[i];
            if(indices.count(difference) && indices[difference] != i)
            {
                return {i, indices[difference]};
            }
        }
    }
};
