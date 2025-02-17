#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map; // To store numbers and their indices
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i]; // Calculate the complement
            if (num_map.find(complement) != num_map.end()) {
                // If the complement exists in the map, return the indices
                return {num_map[complement], i};
            }
            num_map[nums[i]] = i; // Store the current number and its index
        }
        return {};
    }
};
