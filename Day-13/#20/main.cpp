#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> bracketStack; 
        
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                bracketStack.push(c);
            } else {
                if (bracketStack.empty() || !isMatching(bracketStack.top(), c)) {
                    return false; 
                }
                bracketStack.pop();
            }
        }
        
        return bracketStack.empty();
    }
    
private:
    bool isMatching(char open, char close) {
        return (open == '(' && close == ')') || (open == '[' && close == ']') || (open == '{' && close == '}');
    }
};