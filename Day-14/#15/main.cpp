#include <algorithm>
#include <cstddef>
#include <iterator>
#include <limits>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        // special case for empty vector/not enough data
        if (nums.size() < 3) return {};
        if (std::all_of(nums.begin(), nums.end(),
                        [&](const int i) { return i == 0; })) {
            return {{0, 0, 0}};
        }

        // Get the minimum and maximum values for hash talbe
        auto min = nums[0];
        auto max = nums[0];
        for (auto& elem : nums) {
            min = std::min(elem, min);
            max = std::max(elem, max);
        }

        // create a hash table for storing the counts of elements
        std::size_t hash_size = max - min + 1;
        std::vector<int> store(hash_size, 0);
        for (auto& elem : nums) {
            size_t idx = elem - min;
            if (store[idx] < 3) {
                ++store[idx];
            }
        }

        // replace input vector with the unique values
        int unique_size = 0;
        for (int i = 0; i < hash_size; i++) {
            if (store[i] != 0) {
                nums[unique_size++] = i + min;
            }
        }

        std::vector<std::vector<int>> ans;
        auto l = nums.begin();
        auto r = std::next(nums.begin(), unique_size - 1);

        // special cases
        if ((*l <= 0 && *r <= 0) || (*l >= 0 && *r >= 0)) {
            return {};
        }

        while (*l <= 0) {
            while (*r >= 0) {
                int needed = -(*l + *r);
                int idx = needed - min;

                // guard duplicate values & index boundary
                if (needed < *l) {
                    r--;
                    continue;
                }
                if (needed > *r) {
                    r--;
                    continue;
                }

                // not enough values
                if (((*l == needed || *r == needed) && store[idx] == 1) ||
                    ((*l == needed && *r == needed) && store[idx] == 2)) {
                    r--;
                    continue;
                }

                // normal cases
                if (store[idx] != 0) {
                    ans.push_back({*l, needed, *r});
                }
                r--;
            }
            l++;
            r = std::next(nums.begin(), unique_size - 1);
        }

        return ans;
    }
};