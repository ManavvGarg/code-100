#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int start = 0, end = nums.size();

        unordered_set<int> uni;

        while(start < end) {
            uni.insert( nums[start++] + nums[--end] );
        }

        return uni.size();
    }
};