#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        
        int i=0;
        int n = s.length();
        if(n<=1) return s;

        int max_start=0;
        int max_len=1;
        while(i<n){

            int j=i;
            int k=i;
            while(k<n-1 && s[k]==s[k+1]){
                k++;
            }
            i=k+1;

            while(j>0 && k<n-1 && s[j-1]==s[k+1]){
                j--;
                k++;
            }

            if(k-j+1 > max_len){
                max_len = k-j+1;
                max_start=j;
            }
        }

        return s.substr(max_start,max_len);
    }
};