#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0, digitSum = 0;

        for(int i = 0; i < nums.size(); i++) {
            int curr = nums[i];
            elementSum += curr;
            while(curr) {
                digitSum += curr % 10;
                curr /=10;
            }
        }

        return abs(elementSum - digitSum);
    }
};