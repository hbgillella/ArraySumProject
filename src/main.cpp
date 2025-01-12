#include <iostream>
#include <vector>
#include <unordered_map>

// Function to find two indices that sum up to the target
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }
    return {};
}

int main() {
    // Example 1
    {
        std::vector<int> nums = {2, 7, 11, 15};
        int target = 9;
        std::vector<int> result = twoSum(nums, target);
        std::cout << "Example 1: [" << result[0] << ", " << result[1] << "]" << std::endl;
    }

    // Example 2
    {
        std::vector<int> nums = {3, 2, 4};
        int target = 6;
        std::vector<int> result = twoSum(nums, target);
        std::cout << "Example 2: [" << result[0] << ", " << result[1] << "]" << std::endl;
    }

    // Example 3
    {
        std::vector<int> nums = {3, 3};
        int target = 6;
        std::vector<int> result = twoSum(nums, target);
        std::cout << "Example 3: [" << result[0] << ", " << result[1] << "]" << std::endl;
    }

    return 0;
}
