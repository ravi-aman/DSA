class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stack; 
        for(int i = 0; i < s.size(); i++) { 
            if (!stack.empty() && s[i] == stack.top()) { 
                stack.pop();  
            } else {
                stack.push(s[i]); 
            }
        }

        string result;
        while (!stack.empty()) { 
            result = stack.top() + result;
            stack.pop();
        }

        return result;
    }
};
