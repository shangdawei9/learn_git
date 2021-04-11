class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        for (int i = 0; i < nums.size(); ++i) {
            auto iter = hashmap.find(target - nums[i]);
            if (iter != hashmap.end()) {
                return {iter->second, i};
            }
            hashmap[nums[i]] = i;
        }
        return {};
    }
};