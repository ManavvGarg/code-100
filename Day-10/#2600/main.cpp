#include <stdio.h>
#include <iostream>

using namespace std;

class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        
        int sum = 0;
        int picked = 0;
        for (int i = 0; i < k; i++) {
            if (numOnes) {
                sum+=1;
                numOnes--;
            } else if (numZeros) {
                sum += 0;
                numZeros--;
            } else {
                sum+= -1;
            }
        }
        
        return sum;
    }
};